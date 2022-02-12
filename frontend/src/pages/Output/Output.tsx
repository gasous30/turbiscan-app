import styles from "./Output.module.scss";
import bg from "../../asset/bg1920analyze.svg";
import Footer from "../../component/Footer/Footer";

const Output = () => {
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
            <div className={styles.BoxHeader}></div>
            <div className={styles.BoxRow}>
              <div className={styles.Box}></div>
              <div className={styles.Box}></div>
              <div className={styles.Box}></div>
            </div>
            <div className={styles.BoxRow}>
              <div className={styles.Box}></div>
              <div className={styles.Box}></div>
              <div className={styles.Box}></div>
            </div>
            <div className={styles.BoxRow}>
              <div className={styles.Box}></div>
              <div className={styles.Box}></div>
              <div className={styles.Box}></div>
            </div>
          </div>
        </div>
        <div className={styles.Right}>
          <div className={styles.Wrapper}>
            <h4>Graph</h4>
            <div className={styles.BoxWrap}>
              <div className={styles.BoxLeft}></div>
              <div className={styles.BoxRight}>
                <div className={styles.Box} />
                <div className={styles.Box} />
              </div>
            </div>
          </div>
          <div className={styles.Lost}>
            <h3>Loss: RpXX.XXX.XXX</h3>
            <h4>Our Recommendations</h4>
            <p>text text text</p>
          </div>
        </div>
      </div>
      <Footer />
    </div>
  );
};

export default Output;
