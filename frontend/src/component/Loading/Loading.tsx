import styles from "./Loading.module.scss";
import bg from "../../asset/bg1920analyze.svg";
import turbinGif from "../../asset/turbingif.gif";

const Loading = () => {
  return (
    <>
      <div className={styles.Loading} style={{ background: `url(${bg})` }}>
        <img src={turbinGif} />
        <h1 className={styles.ml9}>
          <span className={styles.TextWrapper}>
            <span className={styles.letter}>Please wait for a moment ... </span>
          </span>
        </h1>
      </div>
    </>
  );
};

export default Loading;
