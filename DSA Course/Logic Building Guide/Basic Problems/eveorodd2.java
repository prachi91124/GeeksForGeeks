import java.util.*;

public class eveorodd2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println(fn(n));

        sc.close();
    }

    public static boolean fn(int n){
        if((n&1) == 0){
            return true;
        }
        else{
            return false;
        }
    }
}