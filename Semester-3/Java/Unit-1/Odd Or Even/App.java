import java.util.Scanner;

class App {
    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter An Number : ");
        num = sc.nextInt();

        if (num % 2 == 0) {
            System.out.println(num+" Is Even");
        } else {
            System.out.println(num+" Is Odd");
        }
    }
}
