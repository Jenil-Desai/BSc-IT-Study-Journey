class App {
    public static void main(String[] args) {
        int num1,num2,num3;

        num1 = Integer.parseInt(args[0]);
        num2 = Integer.parseInt(args[1]);
        num3 = Integer.parseInt(args[2]);

        int total = num1+num2+num3;
        float avg = total/3;
        System.out.println("Total = " + total);
        System.out.println("Avg = " + avg);
    }
}
