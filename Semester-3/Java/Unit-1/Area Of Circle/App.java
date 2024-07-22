class Circle {
    float r;

    Circle(){
        r = 10.5f;
    }

    Circle(float rd){
        r = rd;
    }

    float area(){
        return (3.14f*r*r);
    }
}

class App {
    public static void main(String[] args) {
        Circle c1 = new Circle();
        System.out.println("Area : " + c1.area();
        
        Circle c2 = new Circle(20.3f);
        System.out.println("Area : " + c2.area());
    }
}
