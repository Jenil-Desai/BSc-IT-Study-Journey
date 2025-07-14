<?
    class program {
        public $name;

        function __construct($name) {
            $this->name = $name;
        }

        function __destruct() {
            echo "Destructor called for " . $this->name . "\n";
        }
    }

    $program = new program("Program Class");
?>
