<?
  abstract class NextLevelEmployee {
    public $name;
    public $salary;

    abstract public function calculateBonus();
    abstract public function task($task);
  }

  class NextLevelDeveloper extends NextLevelEmployee {
    public function calculateBonus() {
      return $this->salary * 0.10; // 10% bonus
    }

    public function task($task) {
      return "Developer {$this->name} is working on: {$task}";
    }
  }

  $obj = new NextLevelDeveloper();
  $obj->name = "John Doe";
  $obj->salary = 50000;
  echo $obj->task("Building a new feature") . "\n";
  echo "Bonus: " . $obj->calculateBonus() . "\n";
?>
