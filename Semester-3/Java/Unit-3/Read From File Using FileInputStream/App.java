import java.io.FileInputStream;

class App {
    public static void main(String[] args) {
        try {
            FileInputStream fin = new FileInputStream("File.txt");
            int i;
            while ((i = fin.read())!=-1) {
                System.out.print((char)i);
            }
            fin.close();
        } catch (Exception e) {
            System.out.println("Errro = " + e);
        }
    }
}