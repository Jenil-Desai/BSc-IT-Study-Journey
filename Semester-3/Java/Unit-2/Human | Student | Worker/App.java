class Human {
    String fname = "John";
    String lname = "Doe";
}

class Student extends Human {
    char grade;

    Student(String fn, String ln, char g){
        fname = fn;
        lname = ln;
        grade = g;
    }

    void show(){
        System.out.println("\nStudent Class : ");
        System.out.println("\tFirst Name : " + fname);
        System.out.println("\tLast Name : " + lname);
        System.out.println("\tGrade : " + grade);
    }
}

class Worker extends Human {
    int salary;
    int workingHours;

    Worker(String fn,String ln, int s, int wh){
        fname = fn;
        lname = ln;
        salary = s;
        workingHours = wh;
    }

    float moneyPerHour(){
        return (salary/workingHours);
    }
}

class App {
    public static void main(String[] args) {
        Human h1 = new Human();
        Student s1 = new Student("Jenil", "Desai", 'A');
        Worker w1 = new Worker("Jenil", "Desai", 20000, 12);

        System.out.println("Human Class : ");
        System.out.println("\tFirst Name : " + h1.fname);
        System.out.println("\tLast Name : " + h1.lname);

        s1.show();

        System.out.println("\nWorker Class : ");
        System.out.println("\tFirst Name : " + w1.fname);
        System.out.println("\tLast Name : " + w1.lname);
        System.out.println("\tSalary : " + w1.salary);
        System.out.println("\tWorking Hours : " + w1.workingHours);
        System.out.println("\tMoney Per Hours : " + w1.moneyPerHour());
    }     
}