import java.util.Scanner;

public class CF946A_Partition {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n, sum = 0, a;
        n = scan.nextInt();
        for(int i=0; i<n; i++){
            a = scan.nextInt();
            sum += Math.abs(a);
        }

        System.out.println(sum);
    }
}
