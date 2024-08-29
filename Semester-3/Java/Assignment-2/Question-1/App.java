class University {
    String uname;
    String ucity;
    int tot_stud;

    void getUni(String uname, String ucity, int tot_stud){
        this.uname = uname;
        this.ucity = ucity;
        this.tot_stud = tot_stud;
    }
}

class Department extends University {
    int deptno;
    String deptname;

    void getDept(int deptno, String deptname) {
        this.deptno = deptno;
        this.deptname = deptname;
    }

    void display(){
        System.out.println("\n\nDetails : ");
        System.out.println("\tUniversity Name : " + uname);
        System.out.println("\tUniversity City : " + ucity);
        System.out.println("\tTotal Students : " + tot_stud);
        System.out.println("\tDepartment No : " + deptno);
        System.out.println("\tDepartment Name : " + deptname);
    }
}

class App {
    public static void main(String[] args) {
        Department obj1 = new Department();
        Department obj2 = new Department();

        obj1.getUni("Atmiya University", "Rajkot", 1000);
        obj2.getUni("IIT Delhi", "Delhi", 1000);

        obj1.getDept(20,"CS & IT");
        obj2.getDept(40,"CS & IT");

        obj1.display();
        obj2.display();
    }
}
