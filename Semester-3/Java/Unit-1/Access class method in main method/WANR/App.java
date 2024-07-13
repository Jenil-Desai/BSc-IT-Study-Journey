class Student {
    int rollno;
    String name;

    void getValue(int rn,String nm){
        rollno = rn;
        name = nm;
    }

    void putValue() {
        System.out.println("Roll No.: "+rollno);
        System.out.print("Name : "+name);
    }
}

class App {
    public static void main(String args[]){
        Student s1 = new Student();
        String name = "Jenil Desai";
        int rollno = 11;
        s1.getValue(rollno,name);
        s1.putValue();
    }
}
