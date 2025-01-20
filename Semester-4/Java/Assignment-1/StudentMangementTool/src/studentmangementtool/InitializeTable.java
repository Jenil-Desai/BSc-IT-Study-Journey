package studentmangementtool;

import java.sql.*;

public class InitializeTable {
    public static void initTable() {
        try {
           String createTableQry= "CREATE TABLE student("
                   + "Rollno INT,"
                   + "Name VARCHAR(20),"
                   + "City VARCHAR(20),"
                   + "State VARCHAR(20),"
                   + "Phone VARCHAR(10)"
                   + ")";
           PreparedStatement db = GlobalConfigs.getDatabaseConnection(createTableQry);
           
           db.executeUpdate();
           GlobalConfigs.printSuccess("Table Created Successfully");
        } catch (Exception e) {
            GlobalConfigs.printError(e);
        }
    }
}
