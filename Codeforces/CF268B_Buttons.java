import java.util.Scanner;

public class CF268B_Buttons {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int sum =0;
        for (int i = 0; i < n; i++) {
            sum += (i * (n - i - 1) + (n - i));
        }
        System.out.println(sum);
    }
}
