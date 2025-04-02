<?php
$id = $_GET['id'];
$con = mysqli_connect("xampp_db", "root", "root", "Semester4");
if (!$con) {
    die("Connection failed: " . mysqli_connect_error());
}
$sql = "DELETE FROM student WHERE id='$id'";
if (mysqli_query($con, $sql)) {
    echo "Record deleted successfully";
} else {
    echo "Error deleting record: " . mysqli_error($con);
}
mysqli_close($con);
header("Location: crud.php");
