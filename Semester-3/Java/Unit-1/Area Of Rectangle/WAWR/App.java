class Rectangle {
    int length,width;

    void getData(int len,int win){
        length = len;
        width = win;
    }

    int area (){
        return length * width;
    }
}

class App {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle();
        r1.getData(20, 10);
        System.out.println("Area Of Rectangle : "+r1.area());
    }    
}
