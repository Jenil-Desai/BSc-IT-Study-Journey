<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
    include './common/connection.php';

    $sql = "DELETE FROM student WHERE Rollno='1'";
    if (mysqli_query($con, $sql)) {
        echo "Record deleted successfully";
    } else {
        echo "Error inserting record: " . mysqli_error($con);
    }
    ?>
</body>

</html>