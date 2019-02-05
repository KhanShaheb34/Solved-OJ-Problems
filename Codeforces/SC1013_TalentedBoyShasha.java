import java.util.Scanner;

public class SC1013_TalentedBoyShasha {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        int ans=0;

        for(int i=0; i<n; i++){
            String str = scan.next();
            char[] chr = str.toCharArray();
            int size = chr.length-1;

            if(chr[0]=='n' && chr[size]=='d'){
                ans++;
            }
        }

        System.out.println(ans);
    }
}
