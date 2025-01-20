<html>
<body>
    <form action="" method="post">
    <label for="name">Enter Your Name :</label><br>
        <input type="text" name="name" id="name"><br>
        <label for="age">Enter Your Age : </label><br>
        <input type="text" name="age" id="age"><br>
        <input type="submit" name="sbt"><br>
    </form>
    <?php
        if (isset($_POST["sbt"])) {
            echo $_POST["name"];
            echo $_POST["age"];
        }
    ?>
</body>
</html>