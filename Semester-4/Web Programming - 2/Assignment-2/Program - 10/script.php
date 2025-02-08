<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
    $marks = array(
        "Bipin" => array(
            "Maths" => 95,
            "Physics" => 90,
            "Chemistry" => 85
        ),
        "Ravi" => array(
            "Maths" => 90,
            "Physics" => 85,
            "Chemistry" => 80
        ),
        "Amit" => array(
            "Maths" => 85,
            "Physics" => 80,
            "Chemistry" => 75
        )
    );

    echo "Marks for Bipin in Maths : ";
    echo $marks['Bipin']['Maths'] . "<br>";

    echo "Marks for Bhavik in Physics : ";
    echo $marks['Ravi']['Physics'] . "<br>";

    echo "Marks for Amit in Chemistry : ";
    echo $marks['amit']['Chemistry'] . "<br>";

    echo "<pre>";

    print_r($marks);
    ?>
</body>

</html>