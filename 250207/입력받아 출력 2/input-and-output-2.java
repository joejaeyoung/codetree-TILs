import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String str[] = s.split("-");

        for(String a : str)
            System.out.print(a);
    }
}