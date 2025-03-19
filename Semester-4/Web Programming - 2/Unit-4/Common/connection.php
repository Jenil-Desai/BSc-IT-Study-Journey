<?php
$con = mysqli_connect("xampp_db", "root", "root", "Semester4", 3306);
if (!$con) {
    die("Connection failed: " . mysqli_connect_error());
}
