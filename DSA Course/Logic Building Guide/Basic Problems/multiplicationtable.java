import java.util.*;

public class multiplicationtable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.close();;

        fn(n);
    }

    public static void fn(int n){
        for(int i = 1; i <= 10; i++){
            int r = n * i;
            System.out.println(n +"*"+ i + "=" + r);
        }
    }
}