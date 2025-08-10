<?
  class MagicConstants {
    function test() {
      echo "<br> Line Number ->".__line__;
      echo "<br> Function ->".__function__;
      echo "<br> Class ->".__class__;
      echo "<br> Directory ->".__dir__;
      echo "<br> File ->".__file__;
    }
  }

  $obj = new MagicConstants();
  $obj->test();
?>
