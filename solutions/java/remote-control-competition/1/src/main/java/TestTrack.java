import java.util.List;

public class TestTrack {

    public static void race(RemoteControlCar car) {
        car.drive();
    }

    public static List<ProductionRemoteControlCar> getRankedCars(List<ProductionRemoteControlCar> cars) {
        ProductionRemoteControlCar auxCar;
        for (int i = cars.size() -1 ; i > 0; i--) {
            for (int j = cars.size() -1; j > 0; j--) {
                if (cars.get(j-1).compareTo(cars.get(j)) < 0) {
                    auxCar = cars.get(j-1);
                    cars.set(j-1, cars.get(j));
                    cars.set(j, auxCar);
                }
            }
        }
        return cars;
    }
}
