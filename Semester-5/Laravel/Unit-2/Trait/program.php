<?
  trait database {
    public function query ($sql) {
      echo "Executing query: $sql";
    }
  }

  trait logger {
    public function log($message) {
      echo "Log: $message";
    }
  }

  class NextLevelStudent {
    use database, logger;

    public function performAction() {
      $this->query("SELECT * FROM students");
      $this->log("Query executed successfully.");
    }
  }

  $student = new NextLevelStudent();
  $student->performAction();
?>
