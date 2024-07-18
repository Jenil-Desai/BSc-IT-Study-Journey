class Calc{
    static int sqaure(int n){
        return (n*n);
    }
    static int cube(int n){
        return (n*n*n);
    }
}

class App {
    public static void main(String[] args) {
        System.out.println("Sqaure : "+Calc.sqaure(5));
        System.out.println("Sqaure : "+Calc.cube(5));
    }    
}
