class Bank {
    int Bcode;
    String Bname;
    String Bcity;
}

class App {
    public static void main(String[] args) {
        Bank b1 = new Bank();
        b1.Bcode = 100010;
        b1.Bname = "Soul Money Bank Pvt. Ltd.";
        b1.Bcity = "Rajkot";

        Bank b2 = new Bank();
        b2.Bcode = 100011;
        b2.Bname = "Simple Bank Pvt. Ltd.";
        b2.Bcity = "Maana";

        System.out.println("Bank 1 : ");
        System.out.println("\tBank Code : "+b1.Bcode);
        System.out.println("\tBank Name : "+b1.Bname);
        System.out.println("\tBank Location : "+b1.Bcity);

        System.out.println("\nBank 2 : ");
        System.out.println("\tBank Code : "+b2.Bcode);
        System.out.println("\tBank Name : "+b2.Bname);
        System.out.println("\tBank Location : "+b2.Bcity);
    }    
}
