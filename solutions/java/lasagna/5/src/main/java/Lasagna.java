public class Lasagna {
    private static final int EXPECTED_MINUTES_IN_OVEN = 40;
    private static final int PREPARATION_TIME_PER_LAYER = 2;
    public int expectedMinutesInOven() {
        return EXPECTED_MINUTES_IN_OVEN;
    }
    public int remainingMinutesInOven(int timePastInOven) {
        return expectedMinutesInOven() - timePastInOven;
    }
    public int preparationTimeInMinutes(int lasagnaLayers) {
        return lasagnaLayers*PREPARATION_TIME_PER_LAYER;
    }
    public int totalTimeInMinutes(int lasagnaLayers, int timePastInOven) {
        return lasagnaLayers*PREPARATION_TIME_PER_LAYER + timePastInOven;
    }
}
