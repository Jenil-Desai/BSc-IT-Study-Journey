<?
    class Demo {
        private $str;

        public function __construct() {
            $this->str = "I";
        }

        public function addA() {
            $this->str .= " Am";
        }

        public function addB() {
            $this->str .= " A Engineer";
        }

        public function getStr() {
            return $this->str;
        }
    }

    $obj = new Demo();
    echo $obj->addA()->addB()->getStr();
?>
