import java.util.Arrays;
import java.util.Scanner;

public class CF1108B_DivisorsOfTwoIntegers {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int x=1, y=1;
        int[] in = new int[130];
        boolean[] found = new boolean[10001];
        Arrays.fill(found, false);

        for(int i=0; i<n; i++) {
            in[i] = scan.nextInt();
            if (x < in[i]) {
                x = in[i];
            }
        }

        for(int i=0; i<n; i++){
            if(in[i]>0 && x%in[i]==0 && !found[in[i]]){
                found[in[i]] = true;
            }
            else {
                if(in[i]>y) y=in[i];
            }
        }


        System.out.println(x + " " + y);
    }
}
