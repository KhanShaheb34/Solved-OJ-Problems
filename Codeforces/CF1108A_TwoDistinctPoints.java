import java.util.Scanner;

public class CF1108A_TwoDistinctPoints {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        for(int i=0; i<q; i++){
            int l1 = scan.nextInt();
            int r1 = scan.nextInt();
            int l2 = scan.nextInt();
            int r2 = scan.nextInt();

            if(l1==l2) l2++;

            System.out.println(l1 + " " + l2);
        }
    }
}
