import java.util.Scanner;

public class CountSetBits {

    static int countSetBits(int n) {
        if (n == 0)
            return 0;
        return (n & 1) + countSetBits(n >> 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int result = countSetBits(num);
        System.out.println("Number of set bits = " + result);
    }
}
