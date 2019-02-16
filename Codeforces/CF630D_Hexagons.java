import java.util.Scanner;

public class CF630D_Hexagons {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();
        System.out.println(1 + 3*n*(n+1));
    }
}
