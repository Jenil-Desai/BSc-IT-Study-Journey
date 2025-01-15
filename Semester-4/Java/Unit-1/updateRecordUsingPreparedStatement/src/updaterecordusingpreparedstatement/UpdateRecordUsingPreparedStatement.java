package updaterecordusingpreparedstatement;

import java.sql.*;

public class UpdateRecordUsingPreparedStatement {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            
            String qry = "UPDATE student SET name = ? WHERE rollno = ?";
            PreparedStatement pr = con.prepareStatement(qry);
            
            String nm = "Keval Chuahan";
            int rollno = 10;
            pr.setString(1, nm);
            pr.setInt(2, rollno);
            
            int ans = pr.executeUpdate();
            if (ans > 0) {
                System.out.println("Updated");
            } else {
                System.out.println("Not Updated");
            }
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
    
}
