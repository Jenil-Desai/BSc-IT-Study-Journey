<?
  class Users {
    public function show() {
      echo "This is the show method from the Users class.";
    }
  }

  class NextLevelStudent extends Users {
    public function show() {
      echo "This is the overridden show method from the Student class.";
    }
  }

  $obj = new NextLevelStudent();
  $obj->show();
?>
