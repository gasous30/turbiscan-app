import styles from "./Output.module.scss";
import bg from "../../asset/bg1920analyze.svg";
import Footer from "../../component/Footer/Footer";
import { useEffect, useState } from "react";
import Popup from "../../component/Popup/Popup";

const Box = ({
  source1,
  source2,
  source3,
  setTrigPopup,
  setID,
}: {
  source1: string;
  source2: string;
  source3: string;
  setTrigPopup: any;
  setID: any;
}) => {
  return (
    <div className={styles.BoxRow}>
      <div className={styles.Box}>
        <img
          id={source1}
          className="boximg"
          src={source1}
          style={{
            width: "100%",
            height: "100%",
            borderRadius: "10px",
          }}
          onClick={(e: any) => {
            setTrigPopup(true);
            setID(e.target.id);
          }}
        />
      </div>
      <div className={styles.Box}>
        <img
          id={source2}
          className="boximg"
          src={source2}
          style={{
            width: "100%",
            height: "100%",
            borderRadius: "10px",
          }}
          onClick={(e: any) => {
            setTrigPopup(true);
            setID(e.target.id);
          }}
        />
      </div>
      <div className={styles.Box}>
        <img
          id={source3}
          className="boximg"
          src={source3}
          style={{
            width: "100%",
            height: "100%",
            borderRadius: "10px",
          }}
          onClick={(e: any) => {
            setTrigPopup(true);
            setID(e.target.id);
          }}
        />
      </div>
    </div>
  );
};

const BoxGraph = ({
  source,
  setTrigPopup,
  setID,
}: {
  source: string[];
  setTrigPopup: any;
  setID: any;
}) => {
  return (
    <div className={styles.BoxWrap}>
      <div className={styles.BoxLeft}>
        <img
          id={source[0]}
          src={source[0]}
          style={{
            borderRadius: "10px",
            width: "100%",
            height: "100%",
          }}
          onClick={(e: any) => {
            setTrigPopup(true);
            setID(e.target.id);
          }}
        />
      </div>
      <div className={styles.BoxRight}>
        <div className={styles.Box}>
          <img
            id={source[1]}
            src={source[1]}
            style={{
              borderRadius: "10px",
              width: "100%",
              height: "100%",
            }}
            onClick={(e: any) => {
              setTrigPopup(true);
              setID(e.target.id);
            }}
          />
        </div>
        <div className={styles.Box}>
          <img
            id={source[2]}
            src={source[2]}
            style={{
              borderRadius: "10px",
              width: "100%",
              height: "100%",
            }}
            onClick={(e: any) => {
              setTrigPopup(true);
              setID(e.target.id);
            }}
          />
        </div>
      </div>
    </div>
  );
};

const Output = () => {
  const [imageD, setImageD] = useState<number>(0);
  const [imageCombine, setImageCombine] = useState<string[]>([""]);
  const [trigPopup, setTrigPopup] = useState<boolean>(false);
  const [targetID, setTargetID] = useState<string>("");
  const [airfoil, setAirfoil] = useState<String | undefined>("");
  const [graph4412, setGraph4412] = useState<string[]>([""]);
  const [graph4415, setGraph4415] = useState<string[]>([""]);
  const [graph0015, setGraph0015] = useState<string[]>([""]);
  const [graph0009, setGraph0009] = useState<string[]>([""]);
  const [opYears, setOpYears] = useState<string | null>("");

  const importAll = (r: any) => {
    return r.keys().map(r);
  };

  useEffect(() => {
    const imagesDetect = importAll(
      require.context(
        "../../../../backend/data/turbine-surface/bounded/detected",
        false,
        /\.(png|jpe?g|JPG)$/
      )
    );
    const imageUndetect = importAll(
      require.context(
        "../../../../backend/data/turbine-surface/bounded/undetected",
        false,
        /\.(png|jpe?g|JPG)$/
      )
    );
    const imageC = [...imagesDetect, ...imageUndetect];
    setAirfoil(
      sessionStorage
        .getItem("actualPowerFileName")
        ?.toString()
        .split("_")[2]
        .split(".")[0]
    );
    const graphImg4412 = importAll(
      require.context(
        "../../../../backend/data/output-graph/Output_ ConstantAOA_NACA4412",
        false,
        /\.(png|jpe?g|JPG)$/
      )
    );
    setGraph4412(graphImg4412);
    const graphImg0009 = importAll(
      require.context(
        "../../../../backend/data/output-graph/Output_ HighSpeedVarAOA1_NACA0009",
        false,
        /\.(png|jpe?g|JPG)$/
      )
    );
    setGraph0009(graphImg0009);
    const graphImg4415 = importAll(
      require.context(
        "../../../../backend/data/output-graph/Output_ VarSpeedAOA1_NACA4415",
        false,
        /\.(png|jpe?g|JPG)$/
      )
    );
    setGraph4415(graphImg4415);
    const graphImg0015 = importAll(
      require.context(
        "../../../../backend/data/output-graph/Output_ VarSpeedAOA2_NACA0015",
        false,
        /\.(png|jpe?g|JPG)$/
      )
    );
    setGraph0015(graphImg0015);
    setImageCombine(imageC);
    setImageD(imagesDetect.length);
    setOpYears(sessionStorage.getItem("opYears"));
  }, []);
  const actualPower = sessionStorage.getItem("actualPower");
  let powerloss = 0;
  let formatedloss = "0";
  let bladeFatigue = "unknown";
  let action = "No action needed.";
  const formatIDR = new Intl.NumberFormat("id-ID", {
    style: "currency",
    currency: "IDR",
  });
  const formatIDNum = new Intl.NumberFormat("id-ID");
  if (actualPower) {
    let loss = Math.round(parseFloat(actualPower.split(",")[0]));
    powerloss = loss / 1644.52;
    formatedloss = formatIDR.format(loss);
    let fatig = actualPower
      .split(",")
      [actualPower.split(",").length - 1].split(" ");
    let arry = [
      parseFloat(parseFloat(fatig[0].split("[")[1]).toFixed(2)),
      parseFloat(parseFloat(fatig[1]).toFixed(2)),
      parseFloat(parseFloat(fatig[fatig.length - 1].split("]")[0]).toFixed(2)),
    ];
    if (opYears) {
      bladeFatigue = (Math.min(...arry) - parseFloat(opYears)).toString();
    } else {
      bladeFatigue = Math.min(...arry).toString();
    }
    if (parseFloat(bladeFatigue) < 1) {
      action =
        "Therefore, you are recommended to change the damaged component.";
    } else if (parseFloat(bladeFatigue) < 20) {
      action = "Therefore, you are recommended to repair your wind turbine";
    }
  }

  let boxImg: any[] = [];
  for (let i = 0; i < Math.ceil(imageCombine.length / 3); i++) {
    boxImg.push(
      <Box
        source1={imageCombine[i * 3]}
        source2={imageCombine[i * 3 + 1]}
        source3={imageCombine[i * 3 + 2]}
        setTrigPopup={setTrigPopup}
        setID={setTargetID}
      />
    );
  }

  let graphAirfoil;
  if (airfoil == "NACA4415") {
    graphAirfoil = (
      <BoxGraph
        source={graph4415}
        setTrigPopup={setTrigPopup}
        setID={setTargetID}
      />
    );
  } else if (airfoil == "NACA4412") {
    graphAirfoil = (
      <BoxGraph
        source={graph4412}
        setTrigPopup={setTrigPopup}
        setID={setTargetID}
      />
    );
  } else if (airfoil == "NACA0015") {
    graphAirfoil = (
      <BoxGraph
        source={graph0015}
        setTrigPopup={setTrigPopup}
        setID={setTargetID}
      />
    );
  } else {
    graphAirfoil = (
      <BoxGraph
        source={graph0009}
        setTrigPopup={setTrigPopup}
        setID={setTargetID}
      />
    );
  }

  return (
    <div className={styles.Output} style={{ background: `url(${bg})` }}>
      <h3
        style={{
          paddingLeft: "10rem",
          paddingTop: "4.688rem",
          paddingRight: "10rem",
        }}
      >
        Here's What We Found
      </h3>
      <div className={styles.Content}>
        <div className={styles.Left}>
          <div className={styles.Wrapper}>
            <h4>Compilation of Damaged Turbine Pictures</h4>
            {boxImg.map((e) => e)}
          </div>
        </div>
        <div className={styles.Right}>
          <div className={styles.Wrapper}>
            <h4>Graph</h4>
            {graphAirfoil}
          </div>
          <div className={styles.Lost}>
            <h3>Loss: {formatedloss}</h3>
            <h4>Our Recommendations</h4>
            <p>Results of our analysis: </p>
            <p>
              We calculate your turbine blade have a remaining lifetime of{" "}
              <b>{bladeFatigue} years</b>. Your turbine blade generate{" "}
              {formatIDNum.format(powerloss)} kWh power loss which will resulted
              in {formatedloss} loss in income. We detect{" "}
              {imageD > 0
                ? `there are ${imageD} damaged area in your turbine blade surface`
                : "We doesn't detect any significance damage on the turbine blade surface"}
              . <b>{action}</b>
            </p>
          </div>
        </div>
      </div>
      <Footer />
      <Popup
        trigger={trigPopup}
        setTrigger={() => setTrigPopup(false)}
        size={{ width: "80rem", height: "50rem" }}
      >
        <div style={{ width: "100%", height: "100%", display: "flex" }}>
          <img src={targetID} style={{ width: "100%" }} />
        </div>
      </Popup>
    </div>
  );
};

export default Output;
