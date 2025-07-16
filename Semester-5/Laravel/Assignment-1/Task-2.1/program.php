<?
class Vehicle
{
    protected $brand, $model;

    public function __construct($brand, $model)
    {
        $this->brand = $brand;
        $this->model = $model;
    }

    public function getDetails()
    {
        echo "Brand: " . $this->brand;
        echo "<br>";
        echo "Model: " . $this->model;
    }
}

class Car extends Vehicle
{
    protected $fuleType;

    public function __construct($brand, $model, $fuleType)
    {
        $this->brand = $brand;
        $this->model = $model;
        $this->fuleType = $fuleType;
    }

    public function getDetails()
    {
        echo "Brand: " . $this->brand;
        echo "Model: " . $this->model;
        echo "Fule Type: " . $this->fuleType;
    }
}

$obj = new Car("Hyundai", "Creta", "Diseal");
$obj->getDetails();
?>

