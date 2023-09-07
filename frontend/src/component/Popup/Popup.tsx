import styles from "./Popup.module.scss";
import { IPopup } from "./interface";
import { FC } from "react";

const Popup: FC<IPopup> = ({ children, trigger, setTrigger, size }) => {
  return trigger ? (
    <div className={styles.Popup} onClick={setTrigger}>
      <div
        className={styles.PopupInner}
        style={{ width: size?.width, height: size?.height }}
      >
        {children}
      </div>
    </div>
  ) : null;
};

export default Popup;
