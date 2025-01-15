package create.table;

import java.sql.*;

public class Program6 {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            
            String qry = "DELETE FROM student";
            PreparedStatement pr = con.prepareStatement(qry);
            
            int result = pr.executeUpdate();
            if (result > 0 ) {
                System.out.println(result + " Records Deleted");
            } else {
                System.out.println("No Records Deleted");
            }
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}
