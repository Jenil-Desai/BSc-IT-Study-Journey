<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
    $str = "Hello World";

    echo "String Length          : " . strlen($str) . "<br>";
    echo "String In Lowercase    : " . strtolower($str) . "<br>";
    echo "String In Uppercase    : " . strtoupper($str) . "<br>";
    echo "String In MD5 16 Chars : " . md5($str, false) . "<br>";
    echo "String In MD5 32 Chars : " . md5($str) . "<br>";
    echo "String In ASCII        : " . ord($str) . "<br>";
    echo "ASCII In String        : " . chr(72) . "<br>";
    echo "Trimmed String         : " . trim($str) . "<br>";
    echo "Sub String             : " . substr($str, 6) . "<br>";
    echo "Comparing String       : " . strcmp($str, "World") . "<br>";
    echo "Search In String       : " . strstr($str, "o") . "<br>";
    echo "Replacing String       : " . str_replace("World", "Jenil", $str) . "<br>";
    echo "Reversed String       : " . strrev($str) . "<br>";
    echo "Exploded String       : " . print_r(explode(" ", $str)) . "<br>";
    echo "Imploded String       : " . implode(array("Hello World")) . "<br>";
    echo "Comparing Sub String       : " . substr_compare($str, "HELLO WORLD", 0) . "<br>";
    echo "Sub String Count       : " . substr_count($str, "o") . "<br>";
    ?>
</body>

</html>