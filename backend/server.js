const express = require("express");
const multer = require("multer");
const cors = require("cors");
const runpyscript = require("./utilities");
const path = require("path");
const fs = require("fs");

const app = express();

const OBJECT_DETECT_PATH =
  "./python-engine/damage_detection/inferencing_model.py";
const CALC_LOSS_PATH = "./python-engine/powerloss_calc/main_calcLoss.py";
const CALC_FATIGUE_PATH = "./python-engine/powerloss_calc/main_calcFatigue.py";

app.use(cors());

const windStorage = multer.diskStorage({
  destination: (req, file, cb) => {
    cb(null, "data/wind-characteristic");
  },
  filename: (req, file, cb) => {
    cb(null, file.originalname);
  },
});

const actualStorage = multer.diskStorage({
  destination: (req, file, cb) => {
    cb(null, "data/actual-power");
  },
  filename: (req, file, cb) => {
    cb(null, file.originalname);
  },
});

const turbineStorage = multer.diskStorage({
  destination: (req, file, cb) => {
    cb(null, "data/turbine-surface/unbounded");
  },
  filename: (req, file, cb) => {
    cb(null, file.originalname);
  },
});

const windCharacteristic = multer({ storage: windStorage }).single("windChar");
const actualPower = multer({ storage: actualStorage }).single("actualPower");
const turbineSurface = multer({ storage: turbineStorage }).array(
  "turbineSurface"
);

app.post("/upload/windCharacteristic", async (req, res) => {
  fs.readdir(path.join(__dirname, "data/wind-characteristic"), (err, files) => {
    if (err) throw err;
    for (const file of files) {
      fs.unlink(
        path.join(__dirname, "data/wind-characteristic", file),
        (err) => {
          if (err) throw err;
        }
      );
    }
  });
  windCharacteristic(req, res, (err) => {
    if (err) {
      return res.status(500).json(err);
    }
    return res.status(200).send(req.file);
  });
});

app.post("/upload/actualPower/:mat", async (req, res) => {
  fs.readdir(path.join(__dirname, "data/actual-power"), (err, files) => {
    if (err) throw err;
    for (const file of files) {
      fs.unlink(path.join(__dirname, "data/actual-power", file), (err) => {
        if (err) throw err;
      });
    }
  });
  actualPower(req, res, (err) => {
    if (err) {
      return res.status(500).json(err);
    }
    runpyscript(CALC_LOSS_PATH, (options = { args: [req.params.mat] }))
      .then((result) => res.status(200).send(result))
      .catch((err) => console.log(err));
  });
});

app.post("/upload/turbineSurface", async (req, res) => {
  fs.readdir(
    path.join(__dirname, "data/turbine-surface/bounded/detected"),
    (err, files) => {
      if (err) throw err;
      for (const file of files) {
        fs.unlink(
          path.join(__dirname, "data/turbine-surface/bounded/detected", file),
          (err) => {
            if (err) throw err;
          }
        );
      }
    }
  );
  fs.readdir(
    path.join(__dirname, "data/turbine-surface/bounded/undetected"),
    (err, files) => {
      if (err) throw err;
      for (const file of files) {
        fs.unlink(
          path.join(__dirname, "data/turbine-surface/bounded/undetected", file),
          (err) => {
            if (err) throw err;
          }
        );
      }
    }
  );

  fs.readdir(
    path.join(__dirname, "data/turbine-surface/unbounded"),
    (err, files) => {
      if (err) throw err;
      for (const file of files) {
        fs.unlink(
          path.join(__dirname, "data/turbine-surface/unbounded", file),
          (err) => {
            if (err) throw err;
          }
        );
      }
    }
  );
  turbineSurface(req, res, (err) => {
    if (err) {
      return res.status(500).json(err);
    }
    runpyscript(OBJECT_DETECT_PATH, (options = null))
      .then(() => res.status(200).send(req.file))
      .catch((err) => console.log(err));
  });
});

app.use(
  "/get/turbineSurface",
  express.static(__dirname + "/data/turbine-surface/bounded")
);

// app.get("/get/turbineSurface", (req, res, next) => {
//   const options = {
//     root: path.join(__dirname, "data/turbine-surface/bounded"),
//     dotfiles: "deny",
//     header: {
//       "x-timestamp": Date.now(),
//       "x-sent": true,
//     },
//   };
//   const filename = "bounded-024.jpg";
//   res.sendFile(filename, options, (err, res) => {
//     if (err) next(err);
//     else console.log("Sent: ", filename);
//   });
// });

app.listen(8000, () => {
  console.log("App is running on port 8000");
});
