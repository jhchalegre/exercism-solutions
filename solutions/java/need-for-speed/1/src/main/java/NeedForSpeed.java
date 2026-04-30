class NeedForSpeed {

    private int distance;
    private int speed;
    private int batteryDrain;
    private int totalBattery;

    public NeedForSpeed(int speed, int batteryDrain) {
        this.speed = speed;
        this.batteryDrain = batteryDrain;
        totalBattery = 100;
    }

    public boolean batteryDrained() {
        if (totalBattery >= batteryDrain) {
            return false;
        } else {
            return true;
        }
    }

    public int distanceDriven() {
        return distance;
    }

    public void drive() {
        if (!batteryDrained()) {
            distance = distance + speed;
            totalBattery = totalBattery - batteryDrain;
        }
    }

    public static NeedForSpeed nitro() {
        NeedForSpeed nitrocar = new NeedForSpeed(50, 4);
        return nitrocar;
    }

    public int totalDrives() {
        return totalBattery / batteryDrain;
    }

    public int getSpeed() {
        return speed;
    }
    
}

class RaceTrack {

    private int distance;
    
    RaceTrack(int distance) {
        this.distance = distance;
    }

    public boolean canFinishRace(NeedForSpeed car) {
        if (car.totalDrives() * car.getSpeed() >= distance) {
            return true;
        } else {
            return false;
        }
    }
}
