public class LogLine {

    private String logline;
    
    public LogLine(String logline) {
        this.logline = logline;
    }

    public LogLevel getLogLevel() {
        LogLevel output = null;
        switch (logline.substring(1, 4)) {
            case "TRC": output = LogLevel.TRACE;
                break;
            case "DBG": output = LogLevel.DEBUG;
                break;
            case "INF": output = LogLevel.INFO;
                break;
            case "WRN": output = LogLevel.WARNING;
                break;
            case "ERR": output = LogLevel.ERROR;
                break;
            case "FTL": output = LogLevel.FATAL;
                break;
            default: output = LogLevel.UNKNOWN;
                break;
        }
        return output;
    }

    public String getOutputForShortLog() {
        int number = getLogLevel().getCode();

        return String.valueOf(number) + ":" + logline.substring(7, logline.length());
    }
}
