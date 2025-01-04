package deleterecordfromtable;

import java.sql.*;

public class DeleteRecordFromTable {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            String qry = "DELETE FROM student WHERE rollno=?";
            PreparedStatement pr = con.prepareStatement(qry);
            
            int rollno = 11;
            pr.setInt(1, rollno);
            
            int ans = pr.executeUpdate();
            if (ans > 0) {
                System.out.println(ans + " Record Deleted");
            } else {
                System.out.println("No Records Deleted");
            }
        } catch (Exception e) {
           System.out.println("Error : " + e);
        }
    }
    
}
