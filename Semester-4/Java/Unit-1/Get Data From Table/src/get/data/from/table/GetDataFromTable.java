package get.data.from.table;

import java.sql.*;

public class GetDataFromTable {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            
            String qry = "SELECT * FROM student";
            PreparedStatement pr = con.prepareStatement(qry);
            
            ResultSet rs = pr.executeQuery();
            while (rs.next()) {
                int rollno = rs.getInt("rollno");
                String nm = rs.getString("name");
                
                System.out.println(rollno + " " + nm);
            }
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
    
}