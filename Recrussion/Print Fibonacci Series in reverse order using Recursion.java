import java.util.Scanner;

public class ReverseFibonacci {

    static void fibo(int n, int a, int b) {
        if (n > 0) {
            fibo(n - 1, b, a + b);
            System.out.print(a + " ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of Fibonacci terms: ");
        int N = sc.nextInt();
        System.out.print("Reverse Fibonacci Series: ");
        fibo(N, 0, 1);
    }
}
