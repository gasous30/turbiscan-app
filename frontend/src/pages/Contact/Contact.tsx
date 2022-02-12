import styles from "./Contact.module.scss";
import background from "../../asset/bg1920.png";
import ArrowLeft from "../../asset/arrowLeft.svg";
import TurbinGif from "../../asset/turbingif.gif";
import MailIcon from "../../asset/mail.svg";
import CallIcon from "../../asset/telephone.svg";
import LocIcon from "../../asset/location.svg";

const Contact = () => {
  return (
    <div
      className={styles.Contact}
      style={{
        background: `url(${background})`,
        backgroundSize: "100vw calc(100vh - 6rem)",
      }}
    >
      <div className={styles.Left}>
        <div className={styles.Info}>
          <div className={styles.InfoLeft}>
            <p>
              <b>CONTACT</b>
            </p>
          </div>
          <div className={styles.InfoRight}>
            <p>US</p>
          </div>
        </div>
        <div className={styles.Text}>
          <div className={styles.TextGroup}>
            <img src={MailIcon} />
            <p>Email: turbiscan.prandtl@gmail.com</p>
          </div>
          <div className={styles.TextGroup}>
            <img src={CallIcon} />
            <p>Phone: +62812345678</p>
          </div>
          <div className={styles.TextGroup}>
            <img src={LocIcon} />
            <p>Location: Jakarta, Indonesia</p>
          </div>
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

export default Contact;
