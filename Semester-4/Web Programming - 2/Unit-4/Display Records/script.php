<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <?php
    include "./common/connection.php";

    $sql = "SELECT * FROM student";
    $result = mysqli_query($con, $sql);

    for ($row = mysqli_fetch_array($result); $row != null; $row = mysqli_fetch_array($result)) {
        echo "<p>Rollno: " . $row['Rollno'] . "</p>";
        echo "<p>Name: " . $row['Name'] . "</p>";
        echo "<p>Percentage: " . $row['Percentage'] . "</p>";
        echo "<p>City: " . $row['City'] . "</p>";
        echo "<p>State: " . $row['State'] . "</p>";
        echo "<p>Phone: " . $row['Phone'] . "</p>";
        echo "<hr>";
    }
    ?>
</body>

</html>