import styles from "./Popup.module.scss";
import { IPopup } from "./interface";
import { FC } from "react";

const Popup: FC<IPopup> = ({ children, trigger, setTrigger }) => {
  return trigger ? (
    <div className={styles.Popup} onClick={setTrigger}>
      <div className={styles.PopupInner}>{children}</div>
    </div>
  ) : null;
};

export default Popup;
