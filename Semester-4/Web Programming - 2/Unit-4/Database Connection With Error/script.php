<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
    $con = mysqli_connect("xampp_db", "root", "root", "Semester4", 3306);
    if ($con) {
        echo "Connection Established";
    } else {
        echo "Connection Failed" . mysqli_connect_errno();
    }
    ?>
</body>

</html>