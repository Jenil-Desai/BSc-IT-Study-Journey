import java.util.Scanner;

class App {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int DS,java,python,orcale,OS;

        System.out.println("Enter Marks Of Data Structure : ");
         DS = sc.nextInt();

        System.out.println("Enter Marks Of Java : ");
         java = sc.nextInt();

        System.out.println("Enter Marks Of Python : ");
         python = sc.nextInt();

        System.out.println("Enter Marks Of Orcale : ");
         orcale = sc.nextInt();

        System.out.println("Enter Marks Of OS : ");
         OS = sc.nextInt();

        int total;
        total = DS+java+python+orcale+OS;

        float per;
        per = (total/5);

        System.out.println(per + " | " + total);

        if (per >= 90) {
            System.out.println("Destication");
        } else if(per >= 80) {
            System.out.println("1st Class");
        } else if (per >= 70) {
            System.out.println("2nd Class");
        } else if (per >= 60) {
            System.out.println("3rd Class");
        } else {
            System.out.println("Fail");
        }
    }
}
