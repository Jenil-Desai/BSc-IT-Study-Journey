<?
  class Users {
    public $name;
    public function login() {
      echo "User logged in";
    }
  }

  class NextUpLevelStudent extends Users {
    public function viewResult() {
      echo "Viewing result";
    }
  }

  class NextUpLevelTeacher extends Users {
    public function viewResult() {
      echo "Viewing result";
    }
  }

  $student = new NextLevelStudent();
  $student->name = "John Doe";
  $student->login();
  $student->viewResult();

  $teacher = new NextUpLevelTeacher();
  $teacher->name = "Jane Smith";
  $teacher->login();
  $teacher->viewResult();
?>
