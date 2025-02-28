<?php
echo "<table>";
echo "<tr>";
echo "<th>Cookie Name</th>";
echo "<th>Cookie Value</th>";
echo "<th>Action</th>";
echo "</tr>";
foreach ($_COOKIE as $key => $value) {
    echo "<tr>";
    echo "<td>" . $key . "</td>";
    echo "<td>" . $value . "</td>";
    echo "<td><a href='deleteCookie.php?cookieName=" . $key . "'>Delete</a></td>";
    echo "</tr>";
}
echo "</table>";
