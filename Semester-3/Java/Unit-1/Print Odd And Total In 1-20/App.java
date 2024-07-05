public class App {
    public static void main(String[] args) {
        int total = 0;
        for(int i=1;i<=20;i++) {
            if(i % 2 == 1){
                System.out.println(i);
                total = total + i;
            }
        }
        System.out.println("Total : "+total);
    }
}