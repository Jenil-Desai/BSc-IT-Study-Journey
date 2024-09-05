import java.util.Scanner;

class App {
    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter A Number For Cube : ");
        num = sc.nextInt();

        if (num < 0 || num == 0) {
            System.out.println("Cube Of Zero & Negative Numbers Can't Be Found");
        } else {
            num = num * num * num;
            System.out.println("Cube : " + num);
        }
    }    
}
