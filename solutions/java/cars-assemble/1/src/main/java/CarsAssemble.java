public class CarsAssemble {

    public double productionRatePerHour(int speed) {
        double output = 0d;
        if (speed == 0) {
            output = 0d;
        } else if (speed < 5) {
            output = speed * 221;
        } else if (speed < 9) {
            output = speed * 221 * 0.9;
        } else if (speed == 9) {
            output = speed * 221 * 0.8;
        } else if (speed == 10) {
            output = speed * 221 * 0.77;
        }
        return output;
    }

    public int workingItemsPerMinute(int speed) {
        double products = productionRatePerHour(speed);
        double doutput = products/60;
        int output = (int) doutput;
        return output;
    }
}
