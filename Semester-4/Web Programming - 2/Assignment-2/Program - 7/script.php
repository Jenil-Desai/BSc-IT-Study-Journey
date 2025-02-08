<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
    $cities = array(
        "Japan" => "Tokyo",
        "Mexico" => "Mexico City",
        "USA" => "New York City",
        "India" => "Mumbai",
        "Korea" => "Seoul",
        "China" => "Shanghai",
        "Nigeria" => "Lagos",
        "Argentina" => "Buenos Aires",
        "Egypt" => "Cairo",
        "England" => "London"
    );

    foreach ($cities as $country => $city) {
        echo "$city is in $country.\n";
    }
    ?>
</body>

</html>