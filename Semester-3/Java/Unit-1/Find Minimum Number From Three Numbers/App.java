class App{
    public static void main(String args[]){
        if (args.length == 0) {
            System.out.println("Pass 3 Values To Run Program");
        } else if (args.length > 3) {
            System.out.println("Pass 3 Values To Run Program");
        } else {
            int min = Integer.parseInt(args[0]);
            if (Integer.parseInt(args[1]) < min) {
                min = Integer.parseInt(args[1]);
            }
            if (Integer.parseInt(args[2]) < min ) {
                min = Integer.parseInt(args[2]);
            }
            System.out.println("Minimum Number Is : " + min);
        }
    }
}