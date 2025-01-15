package create.table;

import java.sql.*;

public class Program3 {
     public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            
            Connection con = DriverManager.getConnection("jdbc:mysql:///Semester4","root","root");
            
            String qry = "INSERT INTO student (Rollno, Name, Percentage, City, State, Phone) VALUES (?,?,?,?,?,?)";
            PreparedStatement pr = con.prepareStatement(qry);

            pr.setInt(1, 1);
            pr.setString(2, "Alice");
            pr.setFloat(3, 85.5f);
            pr.setString(4, "New York");
            pr.setString(5, "NY");
            pr.setString(6, "123-456-7890");
            pr.addBatch();

            pr.setInt(1, 2);
            pr.setString(2, "Bob");
            pr.setFloat(3, 90.0f);
            pr.setString(4, "Los Angeles");
            pr.setString(5, "CA");
            pr.setString(6, "234-567-8901");
            pr.addBatch();

            pr.setInt(1, 3);
            pr.setString(2, "Charlie");
            pr.setFloat(3, 78.5f);
            pr.setString(4, "Chicago");
            pr.setString(5, "IL");
            pr.setString(6, "345-678-9012");
            pr.addBatch();

            pr.setInt(1, 4);
            pr.setString(2, "David");
            pr.setFloat(3, 92.3f);
            pr.setString(4, "Houston");
            pr.setString(5, "TX");
            pr.setString(6, "456-789-0123");
            pr.addBatch();

            pr.setInt(1, 5);
            pr.setString(2, "Eva");
            pr.setFloat(3, 88.0f);
            pr.setString(4, "Phoenix");
            pr.setString(5, "AZ");
            pr.setString(6, "567-890-1234");
            pr.addBatch();
            
            int[] result = pr.executeBatch();
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}
