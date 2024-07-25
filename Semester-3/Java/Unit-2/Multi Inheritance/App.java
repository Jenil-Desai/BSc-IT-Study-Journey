class Univeristy {
    void showUni (){
        System.out.println("Atmiya University");
    }
}

class Department extends Univeristy {
    void showDept(){
        System.out.println("CS & IT");
    }
}

class Stream extends Department {
    void showStr (){
        System.out.println("Science");
    }
}

class App {
    public static void main(String[] args) {
        Stream s1 = new Stream();
        s1.showUni();
        s1.showDept();
        s1.showStr();
    }
}
