import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.

        int[] arr = new int[3];
        Scanner sc = new Scanner(System.in);

        arr[0] = sc.nextInt();
        arr[1] = sc.nextInt();
        arr[2] = sc.nextInt();

        int sum = Arrays.stream(arr).sum();
        int ave = (int)sum / 3;

        System.out.println(sum + "\n" + ave);
    }
}