<?
class Employee
{
    protected string $name;
    protected float $salary;

    public function __construct(string $name, float $salary)
    {
        $this->name = $name;
        $this->salary = $salary;
    }

    public function getEmployeeDetails()
    {
        echo "Name: " . $this->name;
        echo "Salary: " . $this->salary;
    }
}

class Manager extends Employee
{
    protected string $department;

    public function __construct(string $name, float $salary, string $department)
    {
        $this->name = $name;
        $this->salary = $salary;
        $this->department = $department;
    }

    public function getManagerDetails()
    {
        echo "Name: " . $this->name;
        echo "Salary: " . $this->salary;
        echo "Department: " . $this->department;
    }
}

class Developer extends Employee
{
    protected string $programmingLanguage;

    public function __construct(string $name, float $salary, string $programmingLanguage)
    {
        $this->name = $name;
        $this->salary = $salary;
        $this->programmingLanguage = $programmingLanguage;
    }

    public function getDeveloperDetails()
    {
        echo "Name: " . $this->name;
        echo "Salary: " . $this->salary;
        echo "Programmming Langauge: " . $this->programmingLanguage;
    }
}

$obj = new Manager("Bob Builder", 25000.0, "HR");
$obj->getEmployeeDetails();
$obj->getManagerDetails();

echo "<br>";

$obj2 = new Developer("Alice Smith", 30000.0, "PHP");
$obj2->getEmployeeDetails();
$obj2->getDeveloperDetails();
?>

