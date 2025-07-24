<?
    class ParentC {
    protected string $name;

        public function pubilcFn() {
            echo "Parent Public";
        }

        protected function protectedFn() {
            echo "Parent Protected";
        }

        private function privateFn() {
            echo "Parent Private";
        }
    }

    class Child extends ParentC {
        public function childFn() {
            echo $this->name = "Ram";
            echo $this->pubilcFn();
            echo $this->protectedFn();
        }
    }

    $obj = new Child();
    $obj->childFn();
?>
