import java.util.Scanner;

public class TailRecArraySum {

    static int sumArray(int[] arr, int n, int acc) {
        if (n == 0)
            return acc;
        return sumArray(arr, n - 1, acc + arr[n - 1]);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int total = sumArray(arr, n, 0);
        System.out.println(total);

        sc.close();
    }
}
