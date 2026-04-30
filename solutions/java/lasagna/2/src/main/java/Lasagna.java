public class Lasagna {
    public int expectedMinutesInOven() {
        return 40;
    }
    public int remainingMinutesInOven(int timePastInOven) {
        return 40 - timePastInOven;
    }
    public int preparationTimeInMinutes(int lasagnaLayers) {
        return lasagnaLayers*2;
    }
    public int totalTimeInMinutes(int lasagnaLayers, int timePastInOven) {
        return lasagnaLayers*2 + timePastInOven;
    }
}
