import java.util.Scanner;

class App {
    public static void main(String[] args) {
        int num[] = new int[3];
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < num.length; i++) {
            System.out.println("Enter " + i + " Number : ");
            num[i] = sc.nextInt();
        }

        System.out.print("Average : " + (num[0]+num[1]+num[2]/3));
    }
}
