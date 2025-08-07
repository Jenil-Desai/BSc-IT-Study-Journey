<?php
  class Users {
    public $name;
    public function login() {
      echo "User logged in";
    }
  }

  class NextLevelStudent extends Users {
    public function viewResult() {
      echo "Viewing result";
    }
  }

  class BscStudent extends NextLevelStudent {
    public function viewFaculty() {
      echo "Viewing faculty";
    }
  }

  $obj = new BscStudent();
  $obj->name = "John Doe";
  $obj->login();
  $obj->viewResult();
  $obj->viewFaculty();
?>
