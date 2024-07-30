class Shape{
    void draw(){
        System.out.println("No Shape");
    }
}

class Circle extends Shape{
    void draw(){
        System.out.println("Circle Shape");
    }
}

class Rectangle extends Shape{
    void draw(){
        System.out.println("Rectangle Shape");
    }
}

class App {
    public static void main(String[] args) {
        Shape s;

        Circle c1 = new Circle();
        Rectangle r1 = new Rectangle();

        s = c1;
        s.draw();
    }
}
