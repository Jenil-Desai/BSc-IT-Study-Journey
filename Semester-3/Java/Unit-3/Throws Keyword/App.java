class Demo1 {
    void show() throws Exception {
        System.out.println("Hello World");
    }
}

class App {
    public static void main(String[] args) {
        Demo1 obj = new Demo1();

        try {
            obj.show();;
        } catch (Exception e) {
            System.out.println("Error = " + e);
        }
    }
}
