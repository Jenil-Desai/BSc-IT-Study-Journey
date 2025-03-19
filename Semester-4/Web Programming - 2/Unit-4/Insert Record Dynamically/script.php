<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <form action="" method="post">
        <label for="rollno">Roll No:</label>
        <input type="text" id="rollno" name="rollno" required><br><br>

        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required><br><br>

        <label for="percentage">Percentage:</label>
        <input type="text" id="percentage" name="percentage" required><br><br>

        <label for="city">City:</label>
        <input type="text" id="city" name="city" required><br><br>

        <label for="state">State:</label>
        <input type="text" id="state" name="state" required><br><br>

        <label for="phone">Phone:</label>
        <input type="text" id="phone" name="phone" required><br><br>

        <input type="submit" name="submit" />
    </form>
    <?php
    include "./common/connection.php";

    if (isset($_POST['submit'])) {
        $rollno = $_POST['rollno'];
        $name = $_POST['name'];
        $percentage = $_POST['percentage'];
        $city = $_POST['city'];
        $state = $_POST['state'];
        $phone = $_POST['phone'];

        $query = "INSERT INTO student (rollno, name, percentage, city, state, phone) VALUES ('$rollno', '$name', '$percentage', '$city', '$state', '$phone')";
        if (mysqli_query($con, $query)) {
            echo "Record inserted successfully";
        } else {
            echo "Error: " . $query . "<br>" . mysqli_error($con);
        }
    }
    ?>
</body>

</html>