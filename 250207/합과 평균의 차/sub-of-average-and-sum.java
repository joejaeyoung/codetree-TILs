import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc =new Scanner (System.in);

        int[] arr = new int[3];
        arr[0] = sc.nextInt();
        arr[1] = sc.nextInt();
        arr[2] = sc.nextInt();

        int sum = Arrays.stream(arr).sum();
        System.out.println(sum);
        System.out.println(sum / 3);
        System.out.println(sum - sum / 3);
    }
}