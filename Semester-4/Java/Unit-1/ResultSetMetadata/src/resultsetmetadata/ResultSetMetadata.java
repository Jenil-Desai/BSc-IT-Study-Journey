package resultsetmetadata;
import java.sql.*;

public class ResultSetMetadata {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            
            String qry = "SELECT * FROM student";
            PreparedStatement pr = con.prepareStatement(qry);
            
            ResultSet rs = pr.executeQuery();
            ResultSetMetaData sm = rs.getMetaData();
            
            int count = sm.getColumnCount();
            for (int i = 1; i <= count; i++) {
                String cnm = sm.getColumnName(i);
                String cdt = sm.getColumnTypeName(i);
                
                System.out.println(cnm + " --- " + cdt);
            }
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
    
}
