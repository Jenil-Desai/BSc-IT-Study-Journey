interface Printable {
    void printable();
}

interface Showable {
    void showable();
}

class Test_Multiple implements Printable, Showable {
    public void printable(){
        System.out.println("Printable");
    }

    public void showable() {
        System.out.println("Showable");
    }
}

class App {
    public static void main(String[] args) {
        Test_Multiple obj = new Test_Multiple();
        obj.printable();
        obj.showable();   
    }
}   