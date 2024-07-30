class A{
    A(int a){
        System.out.println("Base Class a = " + a);
    }
}

class B extends A{
    B(int b){
        super(10);
        System.out.println("Derived Class a = " + b);
    }
}

class App {
    public static void main(String[] args) {
        B obj = new B(20);
    }
}
