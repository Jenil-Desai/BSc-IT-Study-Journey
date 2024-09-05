import java.io.FileWriter;

class App {
    public static void main(String[] args) {
        try {
            FileWriter fw = new FileWriter("App.txt");
            for (int i = 1; i <= 10; i++) {
                fw.write(i+" ");
            }
            fw.close();
        } catch (Exception e) {
            System.out.println("Erro : " + e);
        }
    }    
}
