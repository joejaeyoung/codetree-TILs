import java.util.Scanner;

public class Main {
    public static void main (String args[]) {
        // 변수 선언 및 입력
        Scanner sc = new Scanner(System.in);
        String line = sc.next();

        String[] parts = line.split(":");

        int h = Integer.parseInt(parts[0]);
        int m = Integer.parseInt(parts[1]);
        
        // 출력
        System.out.println((h + 1) + ":" + m);
    }
}
