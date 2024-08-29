class App {
    public static void main (String args[]){
        int a[] = {10,20,30};
        int b;

        try {
            try {
                b = a[5] / 1;
            } catch (Exception e) {
                System.out.println("Error = " + e);
            }
            b = a[2] / 0;
        } catch (Exception e) {
            System.out.println("Error = " + e);
        }

        System.out.println("Now Executed");
    }
}
