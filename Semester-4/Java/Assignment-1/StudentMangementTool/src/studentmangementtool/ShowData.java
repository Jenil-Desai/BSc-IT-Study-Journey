package studentmangementtool;

import java.sql.*;

public class ShowData {
    public static void showAllData() {
        try {
            String GetAllDataQry = "SELECT * FROM student";
            PreparedStatement db = GlobalConfigs.getDatabaseConnection(GetAllDataQry);
            
            ResultSet rs = db.executeQuery();
            while (rs.next()) {
                int rollno = rs.getInt("Rollno");
                String name = rs.getString("Name");
                String city = rs.getString("City");
                String state = rs.getString("State");
                String phone = rs.getString("Phone");
                
                System.out.println("==================================================================");
                System.out.println(rollno + " | " + name + " | " + city + " | " + state + " | " + phone);
            }
        } catch (Exception e) {
            
        }
    }
}
