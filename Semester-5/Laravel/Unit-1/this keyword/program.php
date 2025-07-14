<?
    class program {
        private $name;
        public function __construct() {
            $this->name = "Program Class";
        }

        public function display() {
            echo "Hello, this is a " . $this->name . "!";
        }
    }

    $program = new program();
    $program->display();
?>
