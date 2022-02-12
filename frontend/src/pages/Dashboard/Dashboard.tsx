import styles from "./Dashboard.module.scss";
import background from "../../asset/bg1920.png";
import ArrowRight from "../../asset/arrowRight.svg";
import TurbinGif from "../../asset/turbingif.gif";

const Dashboard = () => {
  return (
    <div
      className={styles.Dashboard}
      style={{
        background: `url(${background})`,
        backgroundSize: "100vw calc(100vh - 6rem)",
      }}
    >
      <div className={styles.Left}>
        <div className={styles.Info}>
          <div className={styles.InfoLeft}>
            <p>
              <b>0% RISK</b>
            </p>
          </div>
          <div className={styles.InfoRight}>
            <p>analyze your wind turbine with one click</p>
          </div>
        </div>
        <div className={styles.Title}>
          <p>
            <b>Fastest & secure way to analyze your wind turbine</b>
          </p>
        </div>
        <div className={styles.Text}>
          <p>
            Upload your wind turbine damage pictures and data needed and let we
            analyze them for you.
          </p>
        </div>
        <div
          className={styles.Button}
          onClick={() => (window.location.href = "/analyze")}
        >
          <p>Get Started</p>
          <img src={ArrowRight} />
        </div>
      </div>
      <div className={styles.Right}>
        <img src={TurbinGif} />
      </div>
    </div>
  );
};

export default Dashboard;
