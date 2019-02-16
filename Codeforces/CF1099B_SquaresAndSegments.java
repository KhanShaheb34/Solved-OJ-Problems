import java.util.Scanner;

public class CF1099B_SquaresAndSegments {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double n = scanner.nextDouble();
        System.out.println((int)Math.ceil(Math.sqrt(n)*2));
    }
}
