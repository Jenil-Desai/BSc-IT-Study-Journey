package insertdataintotable;

import java.sql.*;

public class InsertDataIntoTable {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            Statement st = con.createStatement();
            
            int rollNo = 9;
            String name = "Jenil Desai";
            String qry = "INSERT INTO student(rollno,name) VALUES('"+rollNo+"','"+name+"')";
            
            int ans = st.executeUpdate(qry);
            System.out.println(ans + " Record Inserted Successfully");
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
    
}