class Student {
    int rollno;
    String name;
}

class App {
    public static void main(String[] args) {
        Student stu1 = new Student();
        stu1.rollno = 11;
        stu1.name = "Jenil Desai";

        System.out.println("Roll No.: "+stu1.rollno);
        System.out.print("Name : "+stu1.name);
    }
}