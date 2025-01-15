package create.table;

import java.sql.*;
        
public class Program2 {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            
            Statement st = con.createStatement();
            
            String qry = "INSERT INTO student(Rollno,Name,Percentage,City,State,Phone) VALUES(6,'John',99,'Delhi','DH','765-098-4321')";
            st.executeUpdate(qry);
            
            System.out.println("Record Inserted");
        } catch (Exception e) {
            
        }
    }
}
