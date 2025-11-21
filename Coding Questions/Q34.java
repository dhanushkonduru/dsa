import java.util.Scanner;

public class Q34 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter weight (kg): ");
        double weight = scanner.nextDouble();

        System.out.print("Enter height (cm): ");
        double height = scanner.nextDouble();

        double bmi = calculateBMI(weight, height);
        String weightCategory = getWeightCategory(bmi);

        System.out.println("Your BMI is: " + bmi);
        System.out.println("Weight category: " + weightCategory);
    }

    static double calculateBMI(double weight, double heightInCm) {
        double heightInMeters = heightInCm / 100;
        return weight / (heightInMeters * heightInMeters);
    }

    static String getWeightCategory(double bmi) {
        if (bmi < 18.5) {
            return "Underweight";
        } else if (bmi >= 18.5 && bmi < 24.9) {
            return "Normal weight";
        } else if (bmi >= 24.9 && bmi < 30) {
            return "Overweight";
        } else {
            return "Obese";
        }
    }
}
