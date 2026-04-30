public class LogLevels {
    
    public static String message(String logLine) {
        String[] msg = logLine.split(":");
        String output = msg[1].trim();
        return output;
    }

    public static String logLevel(String logLine) {
        String level = logLine.substring(logLine.indexOf("[")+1, logLine.indexOf("]"));
        String lowLevel = level.toLowerCase();
        return lowLevel;
    }

    public static String reformat(String logLine) {
        String msg = LogLevels.message(logLine);
        String lv = LogLevels.logLevel(logLine);
        String output = msg + " (" + lv + ")";
        return output;
    }
}
