<?
    class VisitorTracker {
        public static $count = 0;
        public $object_count = 0;

        public static function show() {
            echo self::$count;
            echo $this->object_count;
        }
    }

    $obj = new VisitorTracker();
    $obj::count++;
    $obj->object_count++;
    $obj->show();
?>
