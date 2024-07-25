import java.util.Scanner;

class App {
    public static void main(String[] args) {
        int num[] = new int[5];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < num.length; i++) {
            System.out.println("Enter " + (i+1) + " Value : ");
            num[i] = sc.nextInt();
            if (num[i] % 2 == 0) {
                break;
            }
        }
        System.out.println("\n\nValues : ");
        for (int i = 0; i < num.length; i++) {
            System.out.println(num[i]);
        }
    }    
}
