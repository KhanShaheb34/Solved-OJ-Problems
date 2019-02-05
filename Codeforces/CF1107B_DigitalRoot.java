import java.util.Scanner;

public class CF1107B_DigitalRoot{

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        for (int i = 0; i < n; i++) {
            long k = scan.nextLong();
            long x = scan.nextLong();

            System.out.println(( k - 1 )* 9 + x);
        }
    }

}
