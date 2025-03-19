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

    $sql = "INSERT INTO student (Rollno, Name, Percentage, City, State, Phone) VALUES ('1', 'John Doe', '85', 'New York', 'NY', '1234567890')";
    if (mysqli_query($con, $sql)) {
        echo "Record inserted successfully";
    } else {
        echo "Error inserting record: " . mysqli_error($con);
    }
    ?>
</body>

</html>