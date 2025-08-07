<?
class Student {
    public $name, $rollno, $mark1, $mark2, $mark3, $total, $percentage, $grade;

    public function  __construct($name, $rollno, $m1, $m2, $m3) {
        $this->name = $name;
        $this->rollno = $rollno;
        $this->mark1 = $m1;
        $this->mark2 = $m2;
        $this->mark3 = $m3;
    }

    function getDetails() {
        $this->total = $this->mark1 + $this->mark2 + $this->mark3;
        $this->percentage = $this->total / 3;
        $this->grade = ($this->percentage >= 60) ? "A" : (($this->percentage >= 40) ? "B" : "F");
        echo "Name: $this->name, Roll: $this->rollno, Total: $this->total, %: $this->percentage, Grade: $this->grade\n";
    }

    function checkResult() {
        echo ($this->percentage >= 40) ? "Pass\n" : "Fail\n";
    }
}
?>
