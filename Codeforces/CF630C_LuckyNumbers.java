import java.util.Scanner;

public class CF630C_LuckyNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();
        long sum =0;
        sum = (long) Math.pow(2, n+1) - 2;
        System.out.println(sum);
    }
}
