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

const Analyze = () => {
  const handleClickPreset = (event: any) => {
    const target = event.target as HTMLElement;
    if (target.className === styles.Preset) {
      target.className = styles.PresetOn;
    } else {
      target.className = styles.Preset;
    }
  };

  return (
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
              Please upload your windturbine damaged pictures in .png or .jpg
              format
            </p>
            <input
              type="file"
              id="turbinesurface"
              style={{ display: "none" }}
            />
            <div className={styles.UploadGroup}>
              <div className={styles.Text}>
                <p>Choose Files</p>
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
            <p style={{ display: "flex", gap: "1rem", alignItems: "center" }}>
              Please upload file in .csv format containing time (t), windspeed,
              and AOA
              <img src={faq} style={{ width: "3rem", cursor: "pointer" }} />
            </p>
            <div className={styles.UploadGroup}>
              <div className={styles.Text}>
                <p>Choose Files</p>
              </div>
              <div className={styles.Button}>
                <img src={cloudUp} />
                <p>Upload</p>
              </div>
            </div>
          </div>
          <div className={styles.Right}>
            <img src={vector1} />
          </div>
        </div>
        <div className={styles.BladeType}>
          <div className={styles.Left}>
            <h4>Input Blade Type</h4>
            <p>Please Select Our Presets</p>
            <div className={styles.Preset} id="2.5" onClick={handleClickPreset}>
              <p>2.5 MW</p>
            </div>
            <div className={styles.Preset} id="2" onClick={handleClickPreset}>
              <p>2 MW</p>
            </div>
            <div
              className={styles.Preset}
              id="1.65"
              onClick={handleClickPreset}
            >
              <p>1.65 MW</p>
            </div>
            <div
              className={styles.Preset}
              id="0.7"
              style={{ marginBottom: 0 }}
              onClick={handleClickPreset}
            >
              <p>0.7 MW</p>
            </div>
          </div>
          <div className={styles.Middle}>
            <h1>Or</h1>
          </div>
          <div className={styles.Right}>
            <h4>Input Blade Type</h4>
            <p>User Manual Input</p>
            <div className={styles.Naca}>
              <p>Airfoil: NACA (Enter 4 digit series)</p>
            </div>
            <div className={styles.FourGroup}>
              <div className={styles.InputCircle}>
                <input className={styles.InputOne} maxLength={1} />
              </div>
              <div className={styles.InputCircle}>
                <input className={styles.InputOne} maxLength={1} />
              </div>
              <div className={styles.InputCircle}>
                <input className={styles.InputOne} maxLength={1} />
              </div>
              <div className={styles.InputCircle}>
                <input className={styles.InputOne} maxLength={1} />
              </div>
            </div>
            <div className={styles.InputTextGroup}>
              <div className={styles.InputText}>
                <div className={styles.Text}>
                  <p>Blade Diameter (in meters):</p>
                </div>
                <input className={styles.InputBtn} type="number" />
              </div>
              <div className={styles.InputText}>
                <div className={styles.Text}>
                  <p>Chord (in meters):</p>
                </div>
                <input className={styles.InputBtn} type="number" />
              </div>
              <div className={styles.InputText}>
                <div className={styles.Text}>
                  <p>Pitch (in meters):</p>
                </div>
                <input className={styles.InputBtn} type="number" />
              </div>
            </div>
          </div>
        </div>
        <div className={styles.Power}>
          <div className={styles.Left}>
            <h4>Input Actual Power Output and Generator Rated Power</h4>
            <p style={{ display: "flex", gap: "1rem", alignItems: "center" }}>
              Please input the actual power output in .csv format
              <img src={faq} style={{ width: "3rem", cursor: "pointer" }} />
            </p>
            <div className={styles.UploadGroup}>
              <div className={styles.Text}>
                <p>Choose Files (.csv)</p>
              </div>
              <div className={styles.Button}>
                <img src={cloudUp} />
                <p>Upload</p>
              </div>
            </div>
            <p
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
              <input className={styles.InputBtn} type="number" />
            </div>
          </div>
          <div className={styles.Right}>
            <img src={power} />
          </div>
        </div>
        <div className={styles.Output}>
          <div className={styles.Left}>
            <h4>Input Operating Hours</h4>
            <p style={{ display: "flex", gap: "1rem", alignItems: "center" }}>
              Please input wind turbine operating hours
            </p>
            <div className={styles.UploadGroup}>
              <div className={styles.Text}>
                <p>Operating Hours: </p>
              </div>
              <input className={styles.InputBtn} />
            </div>
          </div>
          <div className={styles.Right}>
            <img src={operating} />
          </div>
        </div>
        <div className={styles.BtnContainer}>
          <div className={styles.Btn}>
            <p>Analyze</p>
            <img src={ArrowRight} />
          </div>
        </div>
      </div>
      <Footer />
    </div>
  );
};

export default Analyze;
