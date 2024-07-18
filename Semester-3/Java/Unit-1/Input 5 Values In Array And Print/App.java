import java.util.Scanner;

class App{
    public static void main(String[] args) {
        int nm[] = new int[5];
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < nm.length; i++) {
            System.out.println("Enter "+ i + " Value :");
            nm[i] = sc.nextInt();
        }

        for (int i = 0; i < nm.length; i++) {
            System.out.println("Value : "+nm[i]);
        }
    }
}