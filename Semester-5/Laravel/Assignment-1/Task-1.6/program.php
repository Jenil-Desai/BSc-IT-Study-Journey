<?
class Book
{
    public $title, $author, $year;

    function setTitle($t)
    {
        $this->title = $t;
        return $this;
    }
    function setAuthor($a)
    {
        $this->author = $a;
        return $this;
    }
    function setYear($y)
    {
        $this->year = $y;
        return $this;
    }

    function getDetails()
    {
        return "$this->title by $this->author ($this->year)";
    }
}

$book = (new Book)->setTitle("PHP")->setAuthor("John")->setYear(2023);
echo $book->getDetails();
?>

