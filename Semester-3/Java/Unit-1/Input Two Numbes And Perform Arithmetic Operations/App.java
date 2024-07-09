import java.util.Scanner;

class App{
    public static void main(String args[]){
        int num1,num2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter First Number : ");
        num1 = sc.nextInt();
        System.out.println("Enter Second Number : ");
        num2 = sc.nextInt();
        System.out.println("Addition : "+(num1+num2));
        System.out.println("Subtraction : "+(num1-num2));
        System.out.println("Multiplication : "+(num1*num2));
        System.out.println("Divison : "+(num1/num2));
    }
}