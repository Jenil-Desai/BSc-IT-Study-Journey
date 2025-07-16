<?
class Product
{
    public $name, $price, $quantity, $category;

    function __construct($n, $p, $q, $c)
    {
        $this->name = $n;
        $this->price = $p;
        $this->quantity = $q;
        $this->category = $c;
    }

    function getProductInfo()
    {
        return "$this->name, $this->price, $this->quantity, $this->category";
    }

    function updateQuantity($amt)
    {
        $this->quantity += $amt;
    }

    function isInStock()
    {
        return $this->quantity > 0;
    }

    function applyDiscount($percent)
    {
        $this->price -= ($this->price * $percent / 100);
    }

    function restock($amt)
    {
        $this->quantity += $amt;
    }
}

?>

