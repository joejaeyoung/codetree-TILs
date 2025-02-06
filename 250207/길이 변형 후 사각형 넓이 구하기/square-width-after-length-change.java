import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        int weight = sc.nextInt();
        int height = sc.nextInt();

        weight += 8;
        height *= 3;

        System.out.println(weight);
        System.out.println(height);
        System.out.println(weight * height);
    }
}