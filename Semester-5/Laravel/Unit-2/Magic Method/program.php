<?
  class MagicMethod {
    private $n, $mail;
    private $arr = array();

    function __call($method, $args) {
      echo "Name Of Method -> ".$method;
      echo "<br>";
      echo "Arguments Passed -> ";
      print_r($args);
    }

    function __tostring() {
      return "This is a magic method example.";
    }

    function __set($name, $value) {
      echo "Setting '$name' to '$value'.<br>";
    }

    function __get($name) {
      echo "Getting value of '$name'.<br>";
    }

    function __invoke() {
      echo "Object invoked as a function.<br>";
    }

    function __isset($name) {
      return isset($this->arr[$name]);
    }

    function __unset($name) {
      unset($this->arr[$name]);
    }
  }

  $obj = new MagicMethod();
  $obj->testMethod("arg1", "arg2");
  echo "<br>";
  echo $obj;
  echo "<br>";
  $obj->n = "John Doe";
  echo "<br>";
  $obj->mail;
  echo "<br>";
  $obj();
  echo "<br>";
  $obj->arr['key'] = 'value';
  echo isset($obj->arr['key']) ? "Key exists." : "Key does not exist.";
  echo "<br>";
  unset($obj->arr['key']);
  echo isset($obj->arr['key']) ? "Key exists." : "Key does not exist.";
  echo "<br>";
  $obj->nonExistentMethod("arg1", "arg2");
  echo "<br>";
?>
