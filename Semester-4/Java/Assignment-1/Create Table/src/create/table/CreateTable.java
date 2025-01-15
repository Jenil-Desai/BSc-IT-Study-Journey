package create.table;

import java.sql.*;

public class CreateTable {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            
            String qry = "CREATE TABLE student("
                    + "Rollno INT,"
                    + "Name VARCHAR(20),"
                    + "Percentage FLOAT,"
                    + "City VARCHAR(20),"
                    + "State VARCHAR(15),"
                    + "Phone VARCHAR(15)"
                    + ")";
            PreparedStatement pr = con.prepareStatement(qry);
            
            System.out.println("Table Created");
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
    
}

