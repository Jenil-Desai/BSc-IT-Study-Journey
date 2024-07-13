import java.util.Scanner;

class App {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter 1st Value : ");
        int num1 = sc.nextInt();

        System.out.println("Enter 2nd Value : ");
        int num2 = sc.nextInt();

        int temp;

        temp = num1;
        num1 = num2;
        num2 = temp;

        System.out.println("1st Value : "+num1);
        System.out.println("2nd Value : "+num2);
    }    
}
