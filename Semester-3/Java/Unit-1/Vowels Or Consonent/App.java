import java.util.Scanner;

class App {
    public static void main(String args []) {
        String letter;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter An Letter : ");
        letter = sc.nextLine();

        switch(letter) {
            case "a":
                System.out.print("It Is Vowels");
                break;
            case "e":
                System.out.print("It Is Vowels");
                break;
            case "i":
                System.out.print("It Is Vowels");
                break;
            case "o":
                System.out.print("It Is Vowels");
                break;
            case "u":
                System.out.print("It Is Vowels");
                break;
            default:
                System.out.print("It is Consonent");
        }
    }
}
