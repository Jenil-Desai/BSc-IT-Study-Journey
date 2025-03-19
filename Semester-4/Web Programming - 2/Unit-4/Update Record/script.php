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

    $sql = "UPDATE student SET Name='John Doe', Percentage='10', City='New York', State='NY', Phone='1234567890' WHERE Rollno='1'";
    if (mysqli_query($con, $sql)) {
        echo "Record updated successfully";
    } else {
        echo "Error inserting record: " . mysqli_error($con);
    }
    ?>
</body>

</html>