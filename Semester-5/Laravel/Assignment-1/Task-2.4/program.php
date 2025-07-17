<?
class Course
{
    protected string $name;

    public function __construct(string $name)
    {
        $this->name = $name;
    }

    public function getCourseDetails()
    {
        echo "Course Name: " . $this->name;
    }
}

$course = new Course("Hello World In PHP");
$course->getCourseDetails();

class OnlineCourse extends Course
{
    protected string $platformName;
    protected int $duration;

    public function __construct(string $name, string $platformName, int $duration)
    {
        $this->name = $name;
        $this->platformName = $platformName;
        $this->duration = $duration;
    }

    public function getCourseDetails()
    {
        echo "Course Name: " . $this->name;
        echo "Platform name: " . $this->platformName;
        echo "Course Duration (Min): " . $this->duration;
    }
}

$onlineCourse = new OnlineCourse("Online PHP In 1 Hour", "Simplilern", 90);
$onlineCourse->getCourseDetails();
?>

