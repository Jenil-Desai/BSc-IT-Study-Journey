class University {
    void showUni(){
        System.out.println("Atmiya University");
    }
}

class Department extends University{
    void showDept(){
        System.out.println("CS & IT");
    }
}

class app {
    public static void main(String[] args) {
        Department d1 = new Department();
        d1.showUni();
        d1.showDept();
    }
    
}