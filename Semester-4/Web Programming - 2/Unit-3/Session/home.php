<?php
session_start();
if (!isset($_SESSION['name'])) {
    header('location:index.html');
} else {
    echo "Welcome " . $_SESSION['name'];
    echo "<br><a href='logout.php'>Logout</a>";
}
