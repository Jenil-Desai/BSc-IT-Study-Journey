class App {
    public static void main(String[] args) {
        try {
            throw new ArithmeticException("This is an Exception");
        } catch (Exception e) {
            System.out.println("Error = " + e);
        }
        System.out.println("Now Executed");
    }
}
