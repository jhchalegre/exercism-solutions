class BirdWatcher {
    private final int[] birdsPerDay;

    public BirdWatcher(int[] birdsPerDay) {
        this.birdsPerDay = birdsPerDay.clone();
    }

    public int[] getLastWeek() {
        return birdsPerDay;
    }

    public int getToday() {
        return birdsPerDay[6];
    }

    public void incrementTodaysCount() {
         birdsPerDay[6] = birdsPerDay[6] + 1;
    }

    public boolean hasDayWithoutBirds() {
        boolean flag = false;
        for (int birdDay: birdsPerDay) {
            if (birdDay == 0) {
                flag = true;
            }
        }
        return flag;  
    }    

    public int getCountForFirstDays(int numberOfDays) {
        int acum = 0;
        if (numberOfDays > 7) {
            numberOfDays = 7;
        }
        for (int i = 0; i < numberOfDays; i++) {
            acum = acum + birdsPerDay[i];
        }
        return acum;
    }

    public int getBusyDays() {
        int busyDays = 0;
        for (int birdDay: birdsPerDay) {
            if (birdDay > 4) {
                busyDays = busyDays + 1;
            }    
        }
        return busyDays;
    }
}
