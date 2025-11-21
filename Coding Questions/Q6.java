import java.util.Scanner;

public class Q6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        
        System.out.println("Enter two positive integers:");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        
       
        if (a >= b || a <= 0 || b <= 0) {
            System.out.println("Provide valid input");
            return;
        }
        
        
        StringBuilder result = new StringBuilder();
        for (int num = a; num <= b; num++) {
            int primeCheckResult = isPrime(num);
            if (primeCheckResult == 1) {
                result.append(num).append(" ");
            } else if (primeCheckResult == 0) {
                // Do nothing, num is not prime
            } else {
                System.out.println("Provide valid input");
                return;
            }
        }
       
        if (result.length() > 0) {
            System.out.println("Prime numbers in the range [" + a + ", " + b + "]:");
            System.out.println(result.toString().trim());
        } else {
            System.out.println("No prime numbers in the range [" + a + ", " + b + "]");
        }
    }
    
   
    public static int isPrime(int num) {
        if (num <= 1) {
            return -1; 
        }
        if (num == 2) {
            return 1; 
        }
        if (num % 2 == 0) {
            return 0; 
        }
        int sqrt = (int) Math.sqrt(num);
        for (int i = 3; i <= sqrt; i += 2) {
            if (num % i == 0) {
                return 0; 
            }
        }
        return 1;
    }
}
