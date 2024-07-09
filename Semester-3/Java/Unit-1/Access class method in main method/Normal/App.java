class Student {
    int rollno;
    String name;

    void getValue(){
        rollno = 11;
        name = "Jenil Desai";
    }

    void putValue() {
        System.out.println("Roll No.: "+rollno);
        System.out.print("Name : "+name);
    }
}

class App {
    public static void main(String args[]){
        Student s1 = new Student();
        s1.getValue();
        s1.putValue();
    }
}
