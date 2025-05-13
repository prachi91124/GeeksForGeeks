import java.util.*;

public class eveorodd{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();

        System.out.println("By Finding the Remainder: " + fn(n));
        System.out.println("By using Bitwise AND operator: " + bitwiseand(n));
        System.out.println("By using Bitwise shift operators: " + bitwiseshift(n));
    }

    public static boolean fn(int n){
        if(n % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }

    public static boolean bitwiseand(int n){
        if((n&1) == 0){
            return true;
        }
        else{
            return false;
        }
    }

    public static boolean bitwiseshift(int n){
        if( ((n >> 1) << 1) == n){
            return true;
        }
        else{
            return false;
        }
    }
}