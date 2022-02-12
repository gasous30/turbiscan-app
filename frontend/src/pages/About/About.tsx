import styles from "./About.module.scss";
import background from "../../asset/bg1920.png";
import ArrowLeft from "../../asset/arrowLeft.svg";
import TurbinGif from "../../asset/turbingif.gif";

const About = () => {
  return (
    <div
      className={styles.About}
      style={{
        background: `url(${background})`,
        backgroundSize: "100vw calc(100vh - 6rem)",
      }}
    >
      <div className={styles.Left}>
        <div className={styles.Info}>
          <div className={styles.InfoLeft}>
            <p>
              <b>ABOUT</b>
            </p>
          </div>
          <div className={styles.InfoRight}>
            <p>TURBISCAN</p>
          </div>
        </div>
        <div className={styles.Text}>
          <p>Turbiscan is an app that ...</p>
        </div>
        <div
          className={styles.Button}
          onClick={() => (window.location.href = "/dashboard")}
        >
          <img src={ArrowLeft} />

          <p>Home</p>
        </div>
      </div>
      <div className={styles.Right}>
        <img src={TurbinGif} />
      </div>
    </div>
  );
};

export default About;
