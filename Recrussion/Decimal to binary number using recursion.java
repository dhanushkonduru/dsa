import java.util.Scanner;

public class DecimalToBinary {

    public static int decToBin(int d) {
        if (d == 0)
            return 0;
        else
            return (d % 2 + 10 * decToBin(d / 2));
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a decimal number: ");
        int d = sc.nextInt();
        int binary = decToBin(d);
        System.out.println("Binary: " + binary);
    }
}
