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
          <p style={{ marginBottom: "2rem" }}>
            In 2016 the energy sector contributed 73.2% of the 49.4 billion
            tonnes of global CO2 emissions (Ritchie, 2020) which can trigger
            global warming. Wind turbine, one of the renewable energy that is
            environmental friendly, is one of the solution to reduce global
            warming. Along with the United Nations, we are willing to achieve
            the 7th Sustainable Development Goals “Clean and Affordable Energy.”
          </p>
          <p>
            However, there are many potential causes that can lead to wind
            turbine blade failures and cost a lot of money to repair and inspect
            wind turbine from time to time. Therefore, TURBISCAN is an app that
            can help to assess wind turbine’s blade failures and its
            significance to a turbine’s performance as well as the financial
            analysis. With TURBISCAN, inspector can save up money and inspect
            wind turbine through pictures without risking their lifes.{" "}
          </p>
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
