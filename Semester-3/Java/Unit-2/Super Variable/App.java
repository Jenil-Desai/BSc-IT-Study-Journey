class A{
    int a = 10;
}

class B extends A{
    int a = 20;

    void show(){
        System.out.println("Base Class a = " + super.a);
        System.out.println("Derived Class a = " + a);
    }
}

class App {
    public static void main(String args[]){
        B obj = new B();
        obj.show();
    }    
}
