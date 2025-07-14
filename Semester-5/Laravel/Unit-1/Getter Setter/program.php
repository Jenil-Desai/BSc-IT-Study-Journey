<?
    class program {
        private $name;

        public function setName($name) {
            $this->name = $name;
        }

        public function getName() {
            return $this->name;
        }
    }

    $program = new program();
    $program->setName("Program Class");
    echo "The name of the program is: " . $program->getName();
?>
