import java.util.Scanner;

public class Q33 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter student full names: ");
        String fullName = scanner.nextLine();
        String firstName = fullName.split(" ")[0].toUpperCase();

        System.out.print("Enter average mark obtained: ");
        double marks = scanner.nextDouble();

        String vowels = "AEIOU";
        char group = 'X';
        for (int i = 0; i < firstName.length(); i++) {
            if (vowels.indexOf(firstName.charAt(i)) != -1) {
                group = firstName.charAt(i);
                break;
            }
        }
        
        String message;
        String gradeLevel;

        if (marks >= 80 && marks <= 100) {
            message = "Magnificent!!";
            gradeLevel = "1";
        } else if (marks >= 70 && marks < 80) {
            message = "Excellent!!";
            gradeLevel = "2";
        } else if (marks >= 60 && marks < 70) {
            message = "Good work!!";
            gradeLevel = "3";
        } else if (marks >= 50 && marks < 60) {
            message = "Good!!";
            gradeLevel = "4";
        } else if (marks >= 0 && marks < 50) {
            message = "Fail. Try again next year!!";
            gradeLevel = "5";
        } else {
            message = "Invalid Marks!!, Marks too high.";
            gradeLevel = "X";
        }

        System.out.println("Hi " + fullName + ", you were placed in group " + group);
        System.out.println("Grade Level: " + gradeLevel);
        System.out.println("Comment: " + message);
    }
}
