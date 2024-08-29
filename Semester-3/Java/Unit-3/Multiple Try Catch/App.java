class App {
    public static void main(String[] args) {
        int a[] = {10,20,30};
        System.out.println("a = " + a);
        int b;

        try {
            b = a[2] / 0;
            System.out.println("b = " + b);
        } catch (ArithmeticException e) {
            System.out.println("Error = " + e);
        } catch (ArrayIndexOutOfBoundsException e){
            System.out.println("Error = " + e);
        } catch (Exception e){
            System.out.println("Error = " + e);
        }

        System.out.println("Now Executed");
    }
}
