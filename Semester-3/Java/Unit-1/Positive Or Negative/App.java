import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        int val;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter A Value :");
        val = sc.nextInt();

        if (val == 0) {
            System.out.println(val + " Is Zero");
        } else if (val < 0) {
            System.out.print(val + " Is Negative");
        } else {
            System.out.print(val + " Is Positive");
        }
    }
}