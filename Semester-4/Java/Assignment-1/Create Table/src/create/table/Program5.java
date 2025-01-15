package create.table;

import java.sql.*;

public class Program5 {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            
            String qry = "UPDATE student SET Name = ? WHERE Rollno = ?";
            PreparedStatement pr = con.prepareStatement(qry);
            
            pr.setString(1, "John");
            pr.setInt(2, 2);
            
            int result = pr.executeUpdate();
            if (result > 0) {
                System.out.println(result + " Updated");    
            } else {
                System.out.println("No Records Updated");
            }
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}
