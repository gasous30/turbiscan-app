import Footer from "../../component/Footer/Footer";
import styles from "./Analyze.module.scss";
import bg from "../../asset/bg1920analyze.svg";
import cloudUp from "../../asset/cloudUpload.svg";
import vector1 from "../../asset/vectorTurbine.png";
import vector2 from "../../asset/vectorTurbine2.png";
import faq from "../../asset/faq.svg";
import power from "../../asset/power.svg";
import operating from "../../asset/operating.svg";
import ArrowRight from "../../asset/arrowRight.svg";
import { useEffect, useState } from "react";
import { IBladeTypeManual, IDoneObj } from "./interface";
import axios from "axios";
import windExample from "../../asset/windexample.svg";
import powerExample from "../../asset/powerexample.svg";
import Popup from "../../component/Popup/Popup";
import Loading from "../../component/Loading/Loading";

const Analyze = () => {
  const [turbineSurf, setTurbineSurf] = useState<FileList | null>();
  const [windChar, setWindChar] = useState<FileList | null>();
  const [bladeTypePreset, setBladeTypePreset] = useState<String>("");
  const [bladeTypeManual, setBladeTypeManual] = useState<IBladeTypeManual>(
    {} as IBladeTypeManual
  );
  const [actualPower, setActualPower] = useState<FileList | null>();
  const [opHours, setOpHours] = useState<String>("");

  const [windPopup, setWindPopup] = useState<boolean>(false);
  const [actualPopup, setActualPopup] = useState<boolean>(false);

  const [done1, setDone1] = useState<boolean>(false);
  const [done2, setDone2] = useState<boolean>(false);
  const [done3, setDone3] = useState<boolean>(false);
  const [done, setDone] = useState<boolean>(true);

  useEffect(() => {
    if (done1 === true) {
      if (done2 === true) {
        if (done3 === true) {
          setDone(true);
          window.location.href = "output";
        }
      }
    }
  }, [done, done1, done2, done3]);

  const handleClickPreset = (event: any) => {
    const target = event.target as HTMLElement;
    setBladeTypePreset(target.id);
    if (target.className === styles.Preset) {
      target.className = `${styles.Preset} ${styles.PresetOn}`;
      let element = Array.from(document.querySelectorAll(`.${styles.Preset}`));
      element.map((e) => {
        if (e.className === `${styles.Preset} ${styles.PresetOn}`) {
          if (e.id !== target.id) {
            e.className = styles.Preset;
          }
        }
      });
    } else {
      target.className = styles.Preset;
      setBladeTypePreset("");
    }
  };

  const handleMatPreset = (event: any) => {
    const target = event.target as HTMLElement;
    if (target.className === styles.InputBtnMat) {
      target.className = `${styles.InputBtnMat} ${styles.InputBtnMatOn}`;
      let element = Array.from(
        document.querySelectorAll(`.${styles.InputBtnMat}`)
      );
      element.map((e) => {
        if (e.className === `${styles.InputBtnMat} ${styles.InputBtnMatOn}`) {
          if (e.id !== target.id) {
            e.className = styles.InputBtnMat;
          }
        }
      });
      setBladeTypeManual({ ...bladeTypeManual, material: target.id });
    } else {
      target.className = `${styles.InputBtnMat}`;
      setBladeTypeManual({ ...bladeTypeManual, material: "" });
    }
  };

  const handleAnalyze = () => {
    setDone(false);
    // let doneObj = { done1: false, done2: false, done3: false };
    let mat = "carbon";
    if (bladeTypePreset) {
      if (bladeTypePreset == "0.7") {
        mat = "polyester";
      }
    } else {
      console.log(bladeTypeManual);
    }
    console.log(opHours);
    sessionStorage.setItem("opYears", opHours.toString());
    const data_windChar = new FormData();
    const data_actualPower = new FormData();
    const data_turbineSurf = new FormData();
    if (windChar) {
      data_windChar.append("windChar", windChar[0]);
      axios
        .post("http://localhost:8000/upload/windCharacteristic", data_windChar)
        .then((res) => {
          setDone1(true);
        })
        .catch((err) => console.log(err));
    }
    if (actualPower) {
      data_actualPower.append("actualPower", actualPower[0]);
      let name = actualPower[0].name;
      sessionStorage.setItem("actualPowerFileName", name);
      axios
        .post(
          `http://localhost:8000/upload/actualPower/${mat}`,
          data_actualPower
        )
        .then((res) => {
          sessionStorage.setItem("actualPower", res.data);
          setDone2(true);
        })
        .catch((err) => console.log(err));
    }
    if (turbineSurf) {
      for (let i in turbineSurf) {
        if (turbineSurf[i].type && turbineSurf[i].type.includes("image")) {
          data_turbineSurf.append("turbineSurface", turbineSurf[i]);
        }
      }
      axios
        .post("http://localhost:8000/upload/turbineSurface", data_turbineSurf)
        .then((res) => {
          setDone3(true);
        })
        .catch((err) => console.log(err));
    }
  };

  return (
    <>
      {!done ? (
        <Loading />
      ) : (
        <div
          className={styles.Analyze}
          style={{ background: `url(${bg})`, backgroundSize: "cover" }}
        >
          <div className={styles.Content}>
            <h3>First, we need you to input several data</h3>
            <div className={styles.TurbineSurface}>
              <div className={styles.Left}>
                <h4>Upload Turbine Surface</h4>
                <p>
                  Please upload your windturbine damaged pictures in .png or
                  .jpg format
                </p>
                <input
                  type="file"
                  id="turbinesurface"
                  accept=".jpg,.jpeg,.JPG,.png"
                  style={{ display: "none" }}
                  onChange={(e) => setTurbineSurf(e.target.files)}
                  multiple
                />
                <div
                  className={styles.UploadGroup}
                  onClick={() => {
                    (
                      document.getElementById(
                        "turbinesurface"
                      ) as HTMLInputElement
                    ).click();
                  }}
                >
                  <div className={styles.Text}>
                    {turbineSurf ? (
                      <p> {turbineSurf.length} Files selected</p>
                    ) : (
                      <p>Choose Files</p>
                    )}
                  </div>
                  <div className={styles.Button}>
                    <img src={cloudUp} />
                    <p>Upload</p>
                  </div>
                </div>
              </div>
              <div className={styles.Right}>
                <img src={vector2} />
              </div>
            </div>
            <div className={styles.WindCharacteristic}>
              <div className={styles.Left}>
                <h4>Upload Wind Characteristic</h4>
                <p
                  style={{ display: "flex", gap: "1rem", alignItems: "center" }}
                >
                  Please upload file in .csv format containing time (t),
                  windspeed, and AOA
                  <img
                    src={faq}
                    style={{ width: "3rem", cursor: "pointer" }}
                    onClick={() => setWindPopup(true)}
                  />
                </p>
                <div className={styles.UploadGroup}>
                  <input
                    type="file"
                    id="windcharacteristic"
                    accept=".csv"
                    style={{ display: "none" }}
                    onChange={(e) => setWindChar(e.target.files)}
                  />
                  <div className={styles.Text}>
                    {windChar ? <p>{windChar[0].name}</p> : <p>Choose Files</p>}
                  </div>
                  <div
                    className={styles.Button}
                    onClick={() =>
                      (
                        document.getElementById(
                          "windcharacteristic"
                        ) as HTMLInputElement
                      )?.click()
                    }
                  >
                    <img src={cloudUp} />
                    <p>Upload</p>
                  </div>
                </div>
                <button
                  className={styles.Button2}
                  onClick={() =>
                    window.open(
                      "https://drive.google.com/file/d/1WZjd6zkLn0WXyYvJ8jvp6D2OsVJ5WK_U/view"
                    )
                  }
                >
                  CLICK HERE TO DOWNLOAD OUR EXAMPLE
                </button>
              </div>
              <div className={styles.Right}>
                <img src={vector1} />
              </div>
            </div>
            <div className={styles.BladeType}>
              <div className={styles.Left}>
                <h4>Select Wind Turbine Presets</h4>
                <p>Please Select Our Presets</p>
                <div
                  style={{
                    display: "flex",
                    flexDirection: "column",
                    justifyContent: "space-between",
                    height: "100%",
                  }}
                >
                  <div
                    className={styles.Preset}
                    id="2.5"
                    onClick={handleClickPreset}
                  >
                    <p>NACA-4412 CARBON 2.5 MW Wind Turbine</p>
                  </div>
                  <div
                    className={styles.Preset}
                    id="2"
                    onClick={handleClickPreset}
                  >
                    <p>NACA-4415 CARBON 2.0 MW Wind Turbine</p>
                  </div>
                  <div
                    className={styles.Preset}
                    id="1.65"
                    onClick={handleClickPreset}
                  >
                    <p>NACA-0009 CARBON 1.65 MW Wind Turbine</p>
                  </div>
                  <div
                    className={styles.Preset}
                    id="0.7"
                    style={{ marginBottom: 0 }}
                    onClick={handleClickPreset}
                  >
                    <p>NACA-0009 POLYESTER 0.7 MW Wind Turbine</p>
                  </div>
                </div>
              </div>
              <div className={styles.Middle}>
                <h1>Or</h1>
              </div>
              {bladeTypePreset ? (
                <div className={styles.Right}>
                  <h4>Input Wind Turbine Parameters</h4>
                  <p>User Manual Input</p>
                  <div className={styles.Naca}>
                    <p>Airfoil: NACA (Enter 4 digit series)</p>
                  </div>
                  <div className={styles.FourGroup}>
                    <div className={styles.InputCircle}>
                      <input
                        className={styles.InputOne}
                        maxLength={1}
                        disabled
                      />
                    </div>
                    <div className={styles.InputCircle}>
                      <input
                        className={styles.InputOne}
                        maxLength={1}
                        disabled
                      />
                    </div>
                    <div className={styles.InputCircle}>
                      <input
                        className={styles.InputOne}
                        maxLength={1}
                        disabled
                      />
                    </div>
                    <div className={styles.InputCircle}>
                      <input
                        className={styles.InputOne}
                        maxLength={1}
                        disabled
                      />
                    </div>
                  </div>
                  <div className={styles.InputTextGroup}>
                    <div className={styles.InputText}>
                      <div className={styles.Text}>
                        <p>Blade Length (in meters):</p>
                      </div>
                      <input
                        className={styles.InputBtn}
                        type="number"
                        disabled
                      />
                    </div>
                    <div className={styles.InputText}>
                      <div className={styles.Text}>
                        <p>Chord (in meters):</p>
                      </div>
                      <input
                        className={styles.InputBtn}
                        type="number"
                        disabled
                      />
                    </div>
                    <div className={styles.InputText}>
                      <div className={styles.Text}>
                        <p>Twist (in degree):</p>
                      </div>
                      <input
                        className={styles.InputBtn}
                        type="number"
                        disabled
                      />
                    </div>
                    <div className={styles.InputText}>
                      <div className={styles.Text}>
                        <p>Generator Rated Power:</p>
                      </div>
                      <input
                        className={styles.InputBtn}
                        type="number"
                        disabled
                      />
                    </div>
                    <div className={styles.InputText}>
                      <div className={styles.TextMat}>
                        <p>Materials:</p>
                      </div>
                      <div
                        style={{
                          display: "flex",
                          gap: "0.5rem",
                          alignItems: "center",
                        }}
                      >
                        <div
                          style={{
                            display: "flex",
                            flexDirection: "column",
                            gap: "0.5rem",
                          }}
                        >
                          <button
                            className={styles.InputBtnMatDis}
                            style={{ backgroundColor: "#c4c4c4" }}
                            id="carbon"
                            disabled
                          >
                            Carbon
                          </button>
                          <button
                            className={styles.InputBtnMatDis}
                            style={{ backgroundColor: "#c4c4c4" }}
                            id="polyester"
                            disabled
                          >
                            Polyester
                          </button>
                        </div>
                        <div
                          style={{
                            display: "flex",
                            flexDirection: "column",
                            gap: "0.5rem",
                          }}
                        >
                          <button
                            className={styles.InputBtnMatDis}
                            style={{ backgroundColor: "#c4c4c4" }}
                            id="glassfiber"
                            disabled
                          >
                            Glass Fiber
                          </button>
                          <button
                            className={styles.InputBtnMatDis}
                            style={{ backgroundColor: "#c4c4c4" }}
                            id="resin"
                            disabled
                          >
                            Resin
                          </button>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              ) : (
                <div className={styles.Right}>
                  <h4>Input Wind Turbine Parameters</h4>
                  <p>User Manual Input</p>
                  <div className={styles.Naca}>
                    <p>Airfoil: NACA (Enter 4 digit series)</p>
                  </div>
                  <div className={styles.FourGroup}>
                    <div className={styles.InputCircle}>
                      <input
                        className={styles.InputOne}
                        maxLength={1}
                        onChange={(e) =>
                          setBladeTypeManual({
                            ...bladeTypeManual,
                            airfoil: {
                              ...bladeTypeManual.airfoil,
                              1: e.target.value,
                            },
                          })
                        }
                      />
                    </div>
                    <div className={styles.InputCircle}>
                      <input
                        className={styles.InputOne}
                        maxLength={1}
                        onChange={(e) =>
                          setBladeTypeManual({
                            ...bladeTypeManual,
                            airfoil: {
                              ...bladeTypeManual.airfoil,
                              2: e.target.value,
                            },
                          })
                        }
                      />
                    </div>
                    <div className={styles.InputCircle}>
                      <input
                        className={styles.InputOne}
                        maxLength={1}
                        onChange={(e) =>
                          setBladeTypeManual({
                            ...bladeTypeManual,
                            airfoil: {
                              ...bladeTypeManual.airfoil,
                              3: e.target.value,
                            },
                          })
                        }
                      />
                    </div>
                    <div className={styles.InputCircle}>
                      <input
                        className={styles.InputOne}
                        maxLength={1}
                        onChange={(e) =>
                          setBladeTypeManual({
                            ...bladeTypeManual,
                            airfoil: {
                              ...bladeTypeManual.airfoil,
                              4: e.target.value,
                            },
                          })
                        }
                      />
                    </div>
                  </div>
                  <div className={styles.InputTextGroup}>
                    <div className={styles.InputText}>
                      <div className={styles.Text}>
                        <p>Blade Length (in meters):</p>
                      </div>
                      <input
                        className={styles.InputBtn}
                        type="number"
                        onChange={(e) =>
                          setBladeTypeManual({
                            ...bladeTypeManual,
                            bladeDiam: e.target.value,
                          })
                        }
                      />
                    </div>
                    <div className={styles.InputText}>
                      <div className={styles.Text}>
                        <p>Chord (in meters):</p>
                      </div>
                      <input
                        className={styles.InputBtn}
                        type="number"
                        onChange={(e) =>
                          setBladeTypeManual({
                            ...bladeTypeManual,
                            chord: e.target.value,
                          })
                        }
                      />
                    </div>
                    <div className={styles.InputText}>
                      <div className={styles.Text}>
                        <p>Twist (in degree):</p>
                      </div>
                      <input
                        className={styles.InputBtn}
                        type="number"
                        onChange={(e) =>
                          setBladeTypeManual({
                            ...bladeTypeManual,
                            twist: e.target.value,
                          })
                        }
                      />
                    </div>
                    <div className={styles.InputText}>
                      <div className={styles.Text}>
                        <p>Generator Rated Power:</p>
                      </div>
                      <input
                        className={styles.InputBtn}
                        type="number"
                        onChange={(e) =>
                          setBladeTypeManual({
                            ...bladeTypeManual,
                            ratedPower: e.target.value,
                          })
                        }
                      />
                    </div>
                    <div className={styles.InputText}>
                      <div className={styles.TextMat}>
                        <p>Materials:</p>
                      </div>
                      <div
                        style={{
                          display: "flex",
                          gap: "0.5rem",
                          alignItems: "center",
                        }}
                      >
                        <div
                          style={{
                            display: "flex",
                            flexDirection: "column",
                            gap: "0.5rem",
                          }}
                        >
                          <button
                            className={styles.InputBtnMat}
                            style={{ backgroundColor: "#889DDA" }}
                            id="carbon"
                            onClick={handleMatPreset}
                          >
                            Carbon
                          </button>
                          <button
                            className={styles.InputBtnMat}
                            style={{ backgroundColor: "#7F9FFF" }}
                            id="polyester"
                            onClick={handleMatPreset}
                          >
                            Polyester
                          </button>
                        </div>
                        <div
                          style={{
                            display: "flex",
                            flexDirection: "column",
                            gap: "0.5rem",
                          }}
                        >
                          <button
                            className={styles.InputBtnMat}
                            style={{ backgroundColor: "#6780B2" }}
                            id="glassfiber"
                            onClick={handleMatPreset}
                          >
                            Glass Fiber
                          </button>
                          <button
                            className={styles.InputBtnMat}
                            style={{ backgroundColor: "#60B3D7" }}
                            id="resin"
                            onClick={handleMatPreset}
                          >
                            Resin
                          </button>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              )}
            </div>
            <div className={styles.Power}>
              <div className={styles.Left}>
                <h4>Input Actual Power Output</h4>
                <p
                  style={{ display: "flex", gap: "1rem", alignItems: "center" }}
                >
                  Please input the actual power output in .csv format
                  <img
                    src={faq}
                    style={{ width: "3rem", cursor: "pointer" }}
                    onClick={() => setActualPopup(true)}
                  />
                </p>
                <input
                  type="file"
                  id="actualpower"
                  accept=".csv"
                  style={{ display: "none" }}
                  onChange={(e) => setActualPower(e.target.files)}
                />
                <div
                  className={styles.UploadGroup}
                  onClick={() =>
                    document.getElementById("actualpower")?.click()
                  }
                >
                  <div className={styles.Text}>
                    {actualPower ? (
                      <p>{actualPower[0].name}</p>
                    ) : (
                      <p>Choose Files (.csv)</p>
                    )}
                  </div>
                  <div className={styles.Button}>
                    <img src={cloudUp} />
                    <p>Upload</p>
                  </div>
                </div>
                <button
                  className={styles.Button2}
                  onClick={() =>
                    window.open(
                      "https://drive.google.com/file/d/1kYZkQASC1YS4wGoc5FwAMkpI98n60oBs/view"
                    )
                  }
                >
                  CLICK HERE TO DOWNLOAD OUR EXAMPLE
                </button>
                {/* <p
              style={{
                display: "flex",
                gap: "1rem",
                alignItems: "center",
                marginTop: "1rem",
              }}
            >
              Please input the generator rated power
            </p>
            <div className={styles.UploadGroup}>
              <div className={styles.Text}>
                <p>Generator Rated Power: </p>
              </div>
              <input
                className={styles.InputBtn}
                type="number"
                onChange={(e) => setRatedPower(e.target.value)}
              />
            </div> */}
              </div>
              <div className={styles.Right}>
                <img src={power} />
              </div>
            </div>
            <div className={styles.Output}>
              <div className={styles.Left}>
                <h4>Input Operating Years</h4>
                <p
                  style={{ display: "flex", gap: "1rem", alignItems: "center" }}
                >
                  Please input wind turbine operating years
                </p>
                <div className={styles.UploadGroup}>
                  <div className={styles.Text}>
                    <p>Operating Years: </p>
                  </div>
                  <input
                    className={styles.InputBtn}
                    type="number"
                    onChange={(e) => setOpHours(e.target.value)}
                  />
                </div>
              </div>
              <div className={styles.Right}>
                <img src={operating} />
              </div>
            </div>
            <div className={styles.BtnContainer}>
              <div className={styles.Btn} onClick={handleAnalyze}>
                <p>Analyze</p>
                <img src={ArrowRight} />
              </div>
            </div>
          </div>
          <Footer />
          <Popup
            trigger={windPopup}
            setTrigger={() => setWindPopup(false)}
            size={{ width: "35rem", height: "30rem" }}
          >
            <img src={windExample} style={{ width: "100%" }} />
          </Popup>
          <Popup
            trigger={actualPopup}
            setTrigger={() => setActualPopup(false)}
            size={{ width: "35rem", height: "33rem" }}
          >
            <img src={powerExample} style={{ width: "100%" }} />
          </Popup>
        </div>
      )}
    </>
  );
};

export default Analyze;
