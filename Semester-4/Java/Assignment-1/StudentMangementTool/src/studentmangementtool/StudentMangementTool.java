package studentmangementtool;

import java.util.*;

public class StudentMangementTool {
    public static void main(String[] args) {
       while (true) {
           GlobalConfigs.clearConsole();
           int choice = 0;
           Scanner sc = new Scanner(System.in);
           
           System.out.println("|=====================|");
           System.out.println("| 1. Initialize Table |");
           System.out.println("| 2. Insert Record    |");
           System.out.println("| 3. Delete Record    |");
           System.out.println("| 4. Show Record      |");
           System.out.println("| 5. Exit             |");
           System.out.println("|=====================|");
           System.out.print("\nEnter Choice : ");
           choice = sc.nextInt();
           
           
           switch (choice) {
               case 1: 
                   InitializeTable.initTable();
                   break;
               case 2:
                   InsertData.singleInsert();
                   break;
               case 3:
                   DeleteData.singleDelete();
                   break;
               case 4:
                   ShowData.showAllData();
                   break;
               case 5:
                   System.exit(0);
               default:
                   GlobalConfigs.printError("Invalid Choice");
           }
       }
    }
}