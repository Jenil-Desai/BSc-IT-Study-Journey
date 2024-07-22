class Calc {
    static int square (int num){
        return (num*num);
    }

    static int cube (int num){
        return (num*num*num);
    }
}

class App {
    public static void main(String[] args) {
        System.out.println("Sqaure Of 10 : "+Calc.square(10));
        System.out.println("Cube Of 10 : "+Calc.cube(10));
    }    
}
