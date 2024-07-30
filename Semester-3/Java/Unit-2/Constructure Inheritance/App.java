class University {
    University(){
        System.out.println("AU");
    }
}

class Department extends University{
    Department(){
        System.out.println("CS & IT");
    }
}

class App {
    public static void main(String[] args) {
        Department d1 = new Department();
    }
}
