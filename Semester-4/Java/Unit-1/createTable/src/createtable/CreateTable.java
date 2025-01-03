package createtable;

import java.sql.*;

public class CreateTable {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            Statement st = con.createStatement();
            
            String gry = "CREATE TABLE student(rollno INT,name VARCHAR(20))";
            st.executeUpdate(gry);
            System.out.println("Table Created");
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
    
}
