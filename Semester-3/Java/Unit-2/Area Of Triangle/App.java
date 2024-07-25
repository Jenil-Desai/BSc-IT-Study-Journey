class Triangle {
    float base;
    float height;

    Triangle(){
        base = 22.2f;
        height = 33.3f;
    }

    Triangle(float b, float h){
        base = b;
        height = h;
    }

    float area(){
        return (base*height)/2f;
    }
}

class App {
    public static void main(String args[]){
        Triangle t1 = new Triangle();
        System.out.println("Area : " + t1.area());
        Triangle t2 = new Triangle(44.4f, 55.5f);
        System.out.println("Area : " + t2.area());
    }
}
