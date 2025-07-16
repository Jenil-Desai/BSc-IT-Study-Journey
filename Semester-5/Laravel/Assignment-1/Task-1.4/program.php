<?
class Calculator
{
    public static $pi = 3.14;

    static function circleArea($r)
    {
        return self::$pi * $r * $r;
    }

    static function circleCircumference($r)
    {
        return 2 * self::$pi * $r;
    }
}
?>

