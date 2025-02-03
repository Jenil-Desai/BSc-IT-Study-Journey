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
    ?>
</body>

</html>