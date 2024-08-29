class App{
    public static void main(String[] args) {
        int a = 5;
        System.out.println("a = "+a);
        int b;
        b = a / 0;
        System.out.println("b = "+b);
        System.out.println("Never Executed");
    }
}