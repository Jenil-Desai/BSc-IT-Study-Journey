<?php
session_start();
$name = $_GET['name'];
$pwd = $_GET['pwd'];

if ($name == 'admin' && $pwd == 'admin') {
    $_SESSION['name'] = $name;
    $_SESSION['pwd'] = $pwd;
    header('Location: home.php');
} else {
    echo "Invalid Credentials";
}
