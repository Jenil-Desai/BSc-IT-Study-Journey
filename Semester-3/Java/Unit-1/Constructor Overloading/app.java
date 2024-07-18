class Book {
    float price;
    String title;

    Book(){
        price = 200.07f;
        title = "Java Programming";
    }

    Book(float p,String t){
        price = p;
        title = t;
    }

    void show(){
        System.out.println("Book Title : "+title);
        System.out.println("Book Price : "+price);
    }
}

class app {
    public static void main(String[] args) {
        Book b1 = new Book();
        Book b2 = new Book(400.90f,"Python Programming");

        b1.show();
        b2.show();
    }    
}
