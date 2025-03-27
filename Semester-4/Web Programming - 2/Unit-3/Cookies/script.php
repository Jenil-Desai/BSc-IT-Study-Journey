<?php
setcookie("name", "John Watkin", time() + 3600, "/", "", 0);

if (isset($_COOKIE["name"])) {
    echo "Welcome " . $_COOKIE["name"];
} else {
    echo "Sorry... Not recognized";
}
