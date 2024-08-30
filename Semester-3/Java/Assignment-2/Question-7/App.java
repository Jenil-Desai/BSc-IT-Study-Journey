public class App {
    public static void main(String[] args) {
        String str = "Java is simple language";

        System.out.println("Print the str : " + str);
        System.out.println("Length of the str : " + str.length());
        System.out.println("Convert To Uppercase : " + str.toUpperCase());
        System.out.println("Convert To Lowercase : " + str.toLowerCase());
        System.out.println("Find The Index of Character 's' : " + str.indexOf('s'));
        System.out.println("Replace Character 'a' with 'b' : " + str.replace('a', 'b'));
        System.out.println("Replace \"is\" with \"was\" : " + str.replace("is", "with"));
        System.out.println("Find substring from index no 15 : " + str.substring(15));
        System.out.println("Find substring from index no 15 to 18 : " + str.substring(15, 18));
        System.out.println("Check whether string starts with \"J\" or not : " + str.startsWith("J"));
        System.out.println("Check whether string ends with \"j\" or not : " + str.endsWith("j"));
    }    
}
