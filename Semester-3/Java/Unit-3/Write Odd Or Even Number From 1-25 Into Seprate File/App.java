import java.io.FileWriter;

class App {
    public static void main(String[] args) {
        try {
            FileWriter OddFw = new FileWriter("Odd.txt");
            FileWriter EvenFw = new FileWriter("Even.txt");
            for (int i = 1; i <= 25; i++) {
                if (i % 2 == 0) {
                    EvenFw.write(i + " ");
                } else {
                    OddFw.write(i + " ");
                }
            }
            OddFw.close();
            EvenFw.close();
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}
