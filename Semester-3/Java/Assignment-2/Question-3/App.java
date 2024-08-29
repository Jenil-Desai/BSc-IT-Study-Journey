abstract class Shape {
    abstract void draw();
}

class Rectangle extends Shape {
    void draw() {
        System.out.println("Drawing Rectangle");
    }
}

class Circel extends Shape {
    void draw(){
        System.out.println("Drawing Circle");
    }
}

class App {
 public static void main(String[] args) {
    Shape s;
    s = new Rectangle();
    s.draw();
 }   
}
