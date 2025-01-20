package studentmangementtool;

import java.sql.*;

public class GlobalConfigs {
    public static String RED_TEXT = "\u001B[31m";
    public static String GREEN_TEXT = "\u001B[32m";
    public static String YELLOW_TEXT = "\u001B[33m";
    public static String RESET = "\u001B[0m";
    
    public static String DATABASE = "mysql";
    public static String USERNAME = "root";
    public static String PASSWORD = "root";
    
    public static void printError(String error) {
        System.out.println(RED_TEXT + "Error : " + error + RESET);
    }
    
    public static void printError(Exception error) {
        System.out.println(RED_TEXT + "Error : " + error + RESET);
    }
    
    public static void printWarning(String warning) {
        System.out.println(YELLOW_TEXT + "Warning : " + warning + RESET);
    }
    
    public static void printSuccess(String success) {
        System.out.println(GREEN_TEXT + "Success : " + success + RESET);
    }
    
    public static PreparedStatement getDatabaseConnection(String qry) {
        try {
            Connection con = DriverManager.getConnection("jdbc:mysql:///" + DATABASE,USERNAME,PASSWORD);
            
            PreparedStatement pr = con.prepareStatement(qry);
            return pr;
        } catch (Exception e) {
            GlobalConfigs.printError(e);
            return null;
        }
    }
    
    public static void clearConsole() {
        try {
            String operatingSystem = System.getProperty("os.name").toLowerCase();
            if (operatingSystem.contains("win")) {
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                new ProcessBuilder("clear").inheritIO().start().waitFor();
            }
        } catch (Exception e) {
            System.out.println("Error clearing console: " + e.getMessage());
        }
    }
}
