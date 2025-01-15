package studentmangementtool;

import java.util.Scanner;
import java.sql.PreparedStatement;

public class InsertData {
    public static void singleInsert() {
        try {
            Scanner sc = new Scanner(System.in);
            
            System.out.println("Enter Roll No  : ");
            int rollno = sc.nextInt();
            
            System.out.println("Enter Name     : ");
            String name = sc.next();
            
            System.out.println("Enter City     : ");
            String city = sc.next();
            
            System.out.println("Enter State    : ");
            String state = sc.next();
            
            System.out.println("Enter Phone No : ");
            String phone = sc.next();
            
            String insertSingleRecord = "INSERT INTO student(Rollno,Name,City,State,Phone) VALUES(?, ?, ?, ?, ?)";
            PreparedStatement db = GlobalConfigs.getDatabaseConnection(insertSingleRecord);
            
            db.setInt(1, rollno);
            db.setString(2,name);
            db.setString(3, city);
            db.setString(4, state);
            db.setString(5, phone);
            
            int result = db.executeUpdate();
            if (result > 0) {
                GlobalConfigs.printSuccess(result + " Records Inserted");
            } else {
                GlobalConfigs.printWarning("No Records Inserted");
            }
        } catch (Exception e) {
            GlobalConfigs.printError(e + "");
        }
    }
}
