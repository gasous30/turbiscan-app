import styles from "./HowTo.module.scss";
import background from "../../asset/bg1920.png";
import ArrowLeft from "../../asset/arrowLeft.svg";
import TurbinGif from "../../asset/turbingif.gif";
import MailIcon from "../../asset/mail.svg";
import CallIcon from "../../asset/telephone.svg";
import LocIcon from "../../asset/location.svg";
import Popup from "../../component/Popup/Popup";
import BladeIcon from "../../asset/bladeIcon.svg";
import EleIcon from "../../asset/eleIcon.svg";
import PicIcon from "../../asset/picIcon.svg";
import SearchIcon from "../../asset/searchIcon.svg";
import WindIcon from "../../asset/windIcon.svg";
import Blade from "../../asset/blade.svg";
import Ele from "../../asset/ele.svg";
import Pic from "../../asset/pic.svg";
import Search from "../../asset/search.svg";
import Wind from "../../asset/wind.svg";

import { FC, useState } from "react";
import { IPopupIcon } from "./interface";

const PopupIcon: FC<IPopupIcon> = ({ children, imgsource }) => {
  return (
    <div className={styles.PopupHowTo}>
      <img src={imgsource} />
      {children}
    </div>
  );
};

const HowTo = () => {
  const [triggerPic, setTriggerPic] = useState<boolean>(false);
  const [triggerEle, setTriggerEle] = useState<boolean>(false);
  const [triggerBlade, setTriggerBlade] = useState<boolean>(false);
  const [triggerSearch, setTriggerSearch] = useState<boolean>(false);
  const [triggerWind, setTriggerWind] = useState<boolean>(false);

  return (
    <div
      className={styles.HowTo}
      style={{
        background: `url(${background})`,
        backgroundSize: "100vw calc(100vh - 6rem)",
      }}
    >
      <div className={styles.Left}>
        <div className={styles.Info}>
          <div className={styles.InfoLeft}>
            <p>
              <b>HOW TO</b>
            </p>
          </div>
          <div className={styles.InfoRight}>
            <p>OPERATE TURBISCAN</p>
          </div>
        </div>
        <div className={styles.Text}>
          <div className={styles.Top}>
            <div className={styles.Icon} onClick={() => setTriggerPic(true)}>
              <img src={Pic} />
            </div>
            <div className={styles.Icon} onClick={() => setTriggerWind(true)}>
              <img src={Wind} />
            </div>
          </div>
          <div className={styles.Bottom}>
            <div className={styles.Icon} onClick={() => setTriggerBlade(true)}>
              <img src={Blade} />
            </div>
            <div className={styles.Icon} onClick={() => setTriggerEle(true)}>
              <img src={Ele} />
            </div>
            <div className={styles.Icon} onClick={() => setTriggerSearch(true)}>
              <img src={Search} />
            </div>
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
      <Popup trigger={triggerPic} setTrigger={() => setTriggerPic(false)}>
        <PopupIcon imgsource={PicIcon}>
          <div>
            <p>Upload images of the damage of your wind turbine</p>
            <p>You can upload multiple images</p>
          </div>
        </PopupIcon>
      </Popup>
      <Popup trigger={triggerBlade} setTrigger={() => setTriggerBlade(false)}>
        <PopupIcon imgsource={BladeIcon}>
          <div>
            <p>Input blade type</p>
            <p>You can choose to input with our preset or manual input</p>
          </div>
        </PopupIcon>
      </Popup>
      <Popup trigger={triggerEle} setTrigger={() => setTriggerEle(false)}>
        <PopupIcon imgsource={EleIcon}>
          <div>
            <p>Upload the actual power output of your windturbine</p>
          </div>
        </PopupIcon>
      </Popup>
      <Popup trigger={triggerWind} setTrigger={() => setTriggerWind(false)}>
        <PopupIcon imgsource={WindIcon}>
          <div>
            <p>Upload wind characteristic</p>
            <p>.csv file format</p>
            <p>*time, windspeed, AOA required</p>
          </div>
        </PopupIcon>
      </Popup>
      <Popup trigger={triggerSearch} setTrigger={() => setTriggerSearch(false)}>
        <PopupIcon imgsource={SearchIcon}>
          <div>
            <p>Wait for our program to analyze your wind turbine damage</p>
          </div>
        </PopupIcon>
      </Popup>
    </div>
  );
};

export default HowTo;
