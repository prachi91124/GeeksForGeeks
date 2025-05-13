import java.util.*;

public class eveorodd{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();

        System.out.println(fn(n));
    }

    public static boolean fn(int n){
        if(n % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }
}