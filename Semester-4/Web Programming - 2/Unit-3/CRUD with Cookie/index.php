<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>CRUD With Cookies</title>
</head>

<body>
  <form method="get" action="">
    <label for="cookieName">Cookie Name:</label>
    <input type="text" id="cookieName" name="cookieName" required /><br /><br />

    <label for="cookieValue">Cookie Value:</label>
    <input type="text" id="cookieValue" name="cookieValue" required /><br /><br />

    <button type="submit" name="submit">Set Cookie</button>
  </form>
  <?php
  if (isset($_COOKIE['submit'])) {
    $cookie_name = $_GET["cookie_name"];
    $cookie_value = $_GET["cookie_value"];
    setcookie($cookie_name, $cookie_value, time() + (86400 * 30), "/",'',0);
    header("Location: list.php");
  }
  ?>
</body>

</html>