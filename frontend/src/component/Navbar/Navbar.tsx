import styles from "./Navbar.module.scss";
import navbarlogo from "../../asset/navbarlogo.svg";

const Navbar = () => {
  const location = window.location.pathname;
  return (
    <div className={styles.Navbar}>
      <div className={styles.Left}>
        <img
          src={navbarlogo}
          onClick={() => (window.location.href = "/dashboard")}
        />
      </div>
      <div className={styles.Right}>
        <p
          style={{ color: location === "/about" ? "black" : "white" }}
          onClick={() => (window.location.href = "/about")}
        >
          About
        </p>
        <p
          style={{ color: location === "/howto" ? "black" : "white" }}
          onClick={() => (window.location.href = "/howto")}
        >
          How To
        </p>
        <p
          style={{ color: location === "/contact" ? "black" : "white" }}
          onClick={() => (window.location.href = "/contact")}
        >
          Contact
        </p>
      </div>
    </div>
  );
};

export default Navbar;
