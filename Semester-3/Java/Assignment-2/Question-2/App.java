class University {
    String uname;
    String ucity;
    int tot_stud;

    University(String uname,String ucity,int tot_stud){
        this.uname = uname;
        this.ucity = ucity;
        this.tot_stud = tot_stud;
    }
}

class Department extends University{
    int deptno;
    String deptname;

    Department(String uname,String ucity,int tot_stud,int deptno,String deptname){
        super(uname,ucity ,tot_stud );
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
        Department obj1 = new Department("Atmiya University", "Rajkot", 1000, 20, "CS & IT");
        Department obj2 = new Department("IIT Delhi", "Delhi", 2000, 40, "CS & IT");

        obj1.display();
        obj2.display();
    }    
}
