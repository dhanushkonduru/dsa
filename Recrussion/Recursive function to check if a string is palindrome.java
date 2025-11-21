import java.util.Scanner;

public class PalindromeChecker {

    static boolean isPalindromeUtil(String s, int left) {
        int right = s.length() - 1 - left;

        if (left >= right)
            return true;

        if (s.charAt(left) != s.charAt(right))
            return false;

        return isPalindromeUtil(s, left + 1);
    }

    static boolean isPalindrome(String s) {
        return isPalindromeUtil(s, 0);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String s = sc.nextLine();

        if (isPalindrome(s)) {
            System.out.println("Yes, it is a palindrome.");
        } else {
            System.out.println("No, it is not a palindrome.");
        }
    }
}
