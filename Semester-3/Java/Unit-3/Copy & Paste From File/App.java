import java.io.FileReader;
import java.io.FileWriter;

public class App {
    public static void main(String[] args) {
        try {
            FileReader fr = new FileReader("File1.txt");
            FileWriter fw = new FileWriter("File2.txt");
            int i;
            while((i = fr.read()) != -1) {
                fw.write(i);
            }
            fr.close();
            fw.close();
            System.out.println("File Copied");
        } catch (Exception e) {
            System.out.println("Error = " + e);
        }
    }    
}