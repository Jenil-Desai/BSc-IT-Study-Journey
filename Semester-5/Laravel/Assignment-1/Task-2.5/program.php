<?
interface Shape
{
    public function calculateArea();
    public function calculatePerimeter();
}

class Rectangle implements Shape
{
    protected float $length;
    protected float $height;

    public function __construct(float $length, float $height)
    {
        $this->length = $length;
        $this->height = $height;
    }


    public function calculateArea()
    {
        echo "Area Of Rectangle: " . $this->length * $this->height;
    }
    public function calculatePerimeter()
    {
        echo "Perimeter Of Rectangle: " . (2 * ($this->length + $this->height));
    }
}

class Circle implements Shape
{
    protected float $radius;
    public const PI = 3.14;

    public function __construct(float $radius)
    {
        $this->radius = $radius;
    }

    public function calculateArea()
    {
        echo "Area Of Circle: " . (PI * $this->radius);
    }

    public function calculatePerimeter()
    {
        echo "Perimeter Of Circle: " . (2 * PI * $this->radius);
    }
}

$rect = new Rectangle(18, 9);
$rect->calculateArea();
$rect->calculatePerimeter();

$cir = new Circle(18);
$cir->calculateArea();
$cir->calculatePerimeter();
?>

