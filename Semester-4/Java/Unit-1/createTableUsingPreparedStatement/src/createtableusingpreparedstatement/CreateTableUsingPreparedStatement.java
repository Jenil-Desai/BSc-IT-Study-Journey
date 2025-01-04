package createtableusingpreparedstatement;

import java.sql.*;

public class CreateTableUsingPreparedStatement {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            
            String qry = "CREATE TABLE employe(id INT,name VARCHAR(20))";
            PreparedStatement pr = con.prepareStatement(qry);
            
            pr.executeUpdate();
            System.out.println("Employe Table Created");
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
    
}
