import java.util.Scanner;
public class Q13 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter a number:");
        int num = scanner.nextInt();

        if (num == 0) {
            System.out.println("No Factors");
            return;
        }

        int absNum = Math.abs(num);

        System.out.print("Factors of " + num + " are: ");
 
        for (int i = 1; i <= absNum; i++) {
            if (absNum % i == 0) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }
}


