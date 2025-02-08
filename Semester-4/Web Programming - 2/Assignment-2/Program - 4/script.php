<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <form action="" method="get">
        <label for="age">Enter Your Age : </label>
        <input type="text" name="age" id="age">
        <button type="submit" name="sbt">Check Eligiblilty</button>
    </form>

    <?php
    if (isset($_GET['sbt'])) {
        if ($_GET["age"]) {
            echo "You Are Eligible";
        } else {
            echo "You Are Not Eligible";
        }
    }
    ?>
</body>

</html>