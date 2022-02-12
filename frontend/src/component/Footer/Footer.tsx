import styles from "./Footer.module.scss";
import footerlogo from "../../asset/footerLogo.svg";
import copyright from "../../asset/copyright.svg";
import line from "../../asset/Line.svg";
import insta from "../../asset/instagram.svg";
import linkedin from "../../asset/linkedin.svg";
import twitter from "../../asset/twitter.svg";
import facebook from "../../asset/facebook.svg";

const Footer = () => {
  return (
    <div className={styles.Footer}>
      <div className={styles.Left}>
        <img src={footerlogo} className={styles.LeftImg} />
        <div className={styles.Copyright}>
          <img src={copyright} />
          <p>Copyright 2022 Turbiscan by Prandtl</p>
        </div>
      </div>
      <div className={styles.Middle}>
        <div className={styles.MiddleGroup}>
          <img src={line} />
          <p>
            <b>EMAIL</b>
          </p>
        </div>
        <p>
          <u>turbiscan.prandtl@gmail.com</u>
        </p>
      </div>
      <div className={styles.Right}>
        <div className={styles.RightGroup}>
          <img src={line} />
          <p>
            <b>FOLLOW US</b>
          </p>
        </div>
        <div className={styles.IconGroup}>
          <img src={facebook} />
          <img src={insta} />
          <img src={twitter} />
          <img src={linkedin} />
        </div>
      </div>
    </div>
  );
};

export default Footer;
