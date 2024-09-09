import java.io.FileOutputStream;

class App {
    public static void main(String[] args) {
        try {
            FileOutputStream fos = new FileOutputStream("File1.txt");   
            String str = "Hello World";
            byte b[] = str.getBytes();
            fos.write(b);
            fos.close();
        } catch (Exception e) {
            System.out.println("Error = " + e);
        }
    }    
}
