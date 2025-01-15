package create.table;

import java.sql.*;

public class Program7 {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            
            String qry = "SELECT * FROM student WHERE Rollno = ?";
            PreparedStatement pr = con.prepareStatement(qry);
            
            pr.setInt(1, 3);
            
            ResultSet rs = pr.executeQuery();
            while(rs.next()) {
                int rnm = rs.getInt("Rollno");
                String nm = rs.getString("Name");
                float per = rs.getFloat("Percentage");
                String city = rs.getString("City");
                String state = rs.getString("State");
                String phone = rs.getString("Phone");
             
                System.out.println(rnm + " | " + nm + " | " + per + " | " + city + " | " + state + " | " + phone);
            }
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}
