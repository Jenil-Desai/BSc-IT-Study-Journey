package Normal;
import java.util.Scanner;

class AreaRec {
    public static void main(String[] args) {
        float length,width;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Length : ");
        length = sc.nextFloat();
        System.out.println("Enter Width    : ");
        width = sc.nextFloat();

        System.out.println("Area Of Rectangle : "+(length*width));
    }
}
