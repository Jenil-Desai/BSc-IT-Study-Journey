<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <form action="" method="get">
        <label for="width">Width : </label>
        <input type="number" name="width" id="width"><br>
        <label for="height">Height : </label>
        <input type="number" name="height" id="height"><br>
        <button type="submit" name="sbt">Area</button>
    </form>
    <?php
    if (isset($_GET["sbt"])) {
        $width = $_GET["width"];
        $height = $_GET["height"];
        function area_rect($width, $height)
        {
            $area = ($width * $height);
            echo "rectangle of length $height and width $width has an area of $area.";
        }
    }
    ?>
</body>

</html>