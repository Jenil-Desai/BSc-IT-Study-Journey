<?
  class Users {
    final public function login() {
      echo "User logged in successfully.";
    }
  }

  class NextLevelStudent extends Users {
    // Uncommenting the following method will cause an error because it attempts to override a final method.
    // public function login() {
    //   echo "Next level student logged in successfully.";
    // }
  }

  $student = new NextLevelStudent();
  $student->login(); // This will call the final method from the Users class.
?>
