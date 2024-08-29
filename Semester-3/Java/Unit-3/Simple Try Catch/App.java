class App {
 public static void main(String[] args) {
    int a = 5;
    System.out.println("a = "+a);
    try {
        int b;
        b = a / 0;
        System.out.println("b = "+b);   
    } catch (Exception e) {
        System.err.println("Error = "+e);
    }
    System.out.println("Now Executed");
 }   
}
