<?
class TemperatureConverter
{
    static function celsiusToFahrenheit($c)
    {
        return ($c * 9 / 5) + 32;
    }

    static function fahrenheitToCelsius($f)
    {
        return ($f - 32) * 5 / 9;
    }
}

echo TemperatureConverter::celsiusToFahrenheit(0) . "\n";
echo TemperatureConverter::fahrenheitToCelsius(100) . "\n";
?>

