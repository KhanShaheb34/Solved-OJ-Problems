import java.util.Arrays;
import java.util.Scanner;

public class CF977C_LessOrEqual {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) a[i] = scanner.nextInt();
        Arrays.sort(a);
        if(k == n) {
            System.out.println(a[n-1]);
            return;
        }
        if(k == 0) {
            if(a[0]==1) System.out.println("-1");
            else System.out.println("1");
            return;
        }
        if (a[k - 1] == a[k]) {
            System.out.println("-1");
        } else {
            System.out.println(a[k - 1] + 1);
        }
    }
}