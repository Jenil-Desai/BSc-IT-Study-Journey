import java.util.Scanner;

class InputMath {
    public static void main(String[] args) {
        int num1,num2;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter First Number : ");
        num1 = sc.nextInt();
        System.out.println("Enter Second Number:  ");
        num2 = sc.nextInt();

        System.out.println("\nArithmetic Operations : ");
        System.out.println("\n\tAddition       : "+(num1+num2));
        System.out.println("\n\tSubtraction    : "+(num1-num2));
        System.out.println("\n\tMultiplication : "+(num1*num2));
        System.out.println("\n\tDivison        : "+(num1/num2));
    }
}
