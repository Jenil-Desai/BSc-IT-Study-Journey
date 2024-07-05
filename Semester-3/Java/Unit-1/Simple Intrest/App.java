import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        float p,r,n,si;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Principle Amount ;");
        p = sc.nextFloat();
        System.out.println("Enter Rate Of Intrest :");
        r = sc.nextFloat();
        System.out.println("Enter Years :");
        n = sc.nextFloat();
        si = (p*r*n)/100;
        System.out.println("Simple Intrest = Rs."+si);        
    }
}
