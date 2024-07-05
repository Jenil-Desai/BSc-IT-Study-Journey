import java.util.Scanner;

class InputInfo {
    public static void main(String[] args) {
        int rollno;
        String name;
        float per;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Roll No.: ");
        rollno = sc.nextInt();
        System.out.println("Enter Name : ");
        name = sc.next();
        System.out.println("Enter Percentage : ");
        per = sc.nextFloat();

        System.out.println("\nStudent Information : ");
        System.out.println("\tRoll No.   : "+rollno);
        System.out.println("\tName       : "+name);
        System.out.println("\tPercentage : "+per);
    }    
}
