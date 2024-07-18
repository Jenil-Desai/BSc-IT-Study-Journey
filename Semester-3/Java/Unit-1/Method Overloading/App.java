class Calculate {
    int add(int a,int b){
        return (a+b);
    }
    int add(int a,int b, int c){
        return (a+b+c);
    }
}

class App {
    public static void main(String args []){
        Calculate c1 = new Calculate();

        System.out.println("2 Value Sum : "+c1.add(10, 20));
        System.out.println("3 Value Sum : "+c1.add(10, 20, 30));
    }
}
