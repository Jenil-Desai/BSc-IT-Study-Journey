package studentmangementtool;

import java.util.Scanner;
import java.sql.PreparedStatement;

public class DeleteData {
    public static void singleDelete() {
        try {
            Scanner sc = new Scanner(System.in);
        
            System.out.print("Enter Student Roll No : ");
            int studentRollNo = sc.nextInt();
        
            String deleteSingleStudentQry = "DELETE FROM student WHERE Rollno = ?";
            PreparedStatement db = GlobalConfigs.getDatabaseConnection(deleteSingleStudentQry);
        
            db.setInt(1, studentRollNo);
            
            int result = db.executeUpdate();
            if (result > 0) {
                GlobalConfigs.printSuccess(result + " Student Deleted");
            } else {
                GlobalConfigs.printWarning("No Student Found");
            }
        } catch (Exception e) {
            GlobalConfigs.printError(e);
        }
    }
}
