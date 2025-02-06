import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);

        String line = sc.nextLine();
        //System.out.println(line);
        String str[] = line.split("\\.");
        // for(String s : str)
        //     System.out.println(s);
        System.out.print(str[1] + "-" + str[2] + "-" + str[0]);
    }
}