<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
    $arr = array(
        "John" => array(
            "php" => 90,
            "java" => 90,
            "python" => 60,
        ),
        "Alice" => array(
            "php" => 90,
            "java" => 90,
            "python" => 60,
        ),
        "Bob" => array(
            "php" => 90,
            "java" => 90,
            "python" => 60,
        )
    );
    echo $arr;
    echo $arr["Alice"]["php"];
    ?>
</body>

</html>