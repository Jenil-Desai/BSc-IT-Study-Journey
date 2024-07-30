class Bank{
    float getInt(){
        return 0.0f;
    }
}

class SBI extends Bank{
    float getInt(){
        return 6.5f;
    }
}

class ICICI extends Bank {
    float getInt(){
        return 7.5f;
    }
}

class HDFC extends Bank {
    float getInt(){
        return 8.5f;
    }
}

class App {
    public static void main(String args[]){
        SBI s1 = new SBI();
        ICICI c1 = new ICICI();
        HDFC h1 = new HDFC();

        System.out.println("SBI : " + s1.getInt());
        System.out.println("ICICI : " + c1.getInt());
        System.out.println("HDFC : " + h1.getInt());
    }
}
