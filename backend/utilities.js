const { PythonShell } = require("python-shell");

const runpyscript = async (file, options) => {
  const {
    sucess,
    err = "",
    res,
  } = await new Promise((resolve, reject) => {
    PythonShell.run(file, options, (err, result) => {
      if (err) reject({ sucess: false, err });
      resolve({ sucess: true, res: result });
    });
  });
  if (sucess) {
    console.log("finished");
    console.log(res);
    return res;
  }
};

module.exports = runpyscript;
