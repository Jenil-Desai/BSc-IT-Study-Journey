<?php
if (isset($_GET['cookieName'])) {
    $cookie_name = $_GET['cookieName'];
    setcookie($cookie_name, "", time() - 3600, "/");
    header("Location: list.php");
}
