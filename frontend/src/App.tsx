import "./App.css";
import {
  Routes,
  BrowserRouter as Router,
  Route,
  Navigate,
} from "react-router-dom";
import Dashboard from "./pages/Dashboard/Dashboard";
import About from "./pages/About/About";
import HowTo from "./pages/HowTo/HowTo";
import Analyze from "./pages/Analyze/Analyze";
import Navbar from "./component/Navbar/Navbar";

const App = () => {
  return (
    <div>
      <Router>
        <Navbar />
        <Routes>
          <Route path="/dashboard" element={<Dashboard />} />
          <Route path="/about" element={<About />} />
          <Route path="/howto" element={<HowTo />} />
          <Route path="/analyze" element={<Analyze />} />
          <Route path="*" element={<Navigate to="/dashboard" />} />
        </Routes>
      </Router>
    </div>
  );
};

export default App;
