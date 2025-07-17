<?
class Person
{
    protected string $name;
    protected int $age;

    public function __construct(string $name, int $age)
    {
        $this->name = $name;
        $this->age = $age;
    }

    public function getPersonDetails()
    {
        echo "Name: " . $this->name;
        echo "Age: " . $this->age;
    }
}

$person1 = new Person("Bob", 9000);
$person1->getPersonDetails();
class Employee extends Person
{
    protected int $employeeId;

    public function __construct(string $name, int $age, int $employeeId)
    {
        $this->name = $name;
        $this->age = $age;
        $this->employeeId = $employeeId;
    }

    public function getEmployeeDetails()
    {
        echo "Name: " . $this->name;
        echo "Age: " . $this->age;
        echo "Employee: " . $this->employeeId;
    }
}

$employee = new Employee("Alice", 9000, 1);
$employee->getPersonDetails();
$employee->getEmployeeDetails();

class TeamLeader extends Employee
{
    protected int $teamSize;

    public function __construct(string $name, int $age, int $employeeId, int $teamSize)
    {
        $this->name = $name;
        $this->age = $age;
        $this->employeeId = $employeeId;
        $this->teamSize = $teamSize;
    }

    public function getEmployeeDetails()
    {
        echo "Name: " . $this->name;
        echo "Age: " . $this->age;
        echo "Employee: " . $this->employeeId;
        echo "Team Size: " . $this->teamSize;
    }
}

$teamleader = new TeamLeader("Alice", 9000, 1, 90);
$teamleader->getPersonDetails();
$teamleader->getEmployeeDetails();
?>

