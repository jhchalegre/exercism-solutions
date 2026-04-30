public class SalaryCalculator {
    public double salaryMultiplier(int daysSkipped) {
        return (daysSkipped > 4) ? 0.85 : 1.0;
    }

    public int bonusMultiplier(int productsSold) {
        return (productsSold > 19) ? 13 : 10;
    }

    public double bonusForProductsSold(int productsSold) {
        return bonusMultiplier(productsSold) * productsSold;
    }

    public double finalSalary(int daysSkipped, int productsSold) {
        double output = (salaryMultiplier(daysSkipped) * 1000) + bonusForProductsSold(productsSold);
        return (output > 2000) ? 2000 : output;
    } 
}
