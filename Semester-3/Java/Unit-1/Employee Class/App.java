class Employee {
    int id,salary;
    String name;
}

class App {
    public static void main(String[] args) {
        Employee e1 = new Employee();
        e1.id = 1001;
        e1.name = "John Doe";
        e1.salary = 90000;

        Employee e2 = new Employee();
        e2.id = 1002;
        e2.name = "Charles Babbage";
        e2.salary = 100000;

        System.out.println("First Employee Details :");
        System.out.println("\tEmployee ID : "+e1.id);
        System.out.println("\tEmployee Name : "+e1.name);
        System.out.println("\tEmployee Salary : "+e1.salary);

        System.out.println("\nSecond Employee Details :");
        System.out.println("\tEmployee ID : "+e2.id);
        System.out.println("\tEmployee Name : "+e2.name);
        System.out.println("\tEmployee Salary : "+e2.salary);
    }    
}
