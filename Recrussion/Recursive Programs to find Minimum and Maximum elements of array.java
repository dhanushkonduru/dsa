import java.util.Scanner;

public class MinMaxRecursive {

    public static int findMin(int[] arr, int n) {
        if (n == 1)
            return arr[0];
        return Math.min(arr[n - 1], findMin(arr, n - 1));
    }

    public static int findMax(int[] arr, int n) {
        if (n == 1)
            return arr[0];
        return Math.max(arr[n - 1], findMax(arr, n - 1));
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        int min = findMin(arr, n);
        int max = findMax(arr, n);

        System.out.println("Minimum element: " + min);
        System.out.println("Maximum element: " + max);
    }
}
