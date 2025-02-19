<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <script src="https://unpkg.com/@tailwindcss/browser@4"></script>
    <title>Document</title>
</head>

<body>
    <form action="" method="post" enctype="multipart/form-data">
        <input type="file" name="file" id="file">
        <input type="submit" name="submit">
    </form>
    <?php
    if (isset($_POST["submit"])) {
        $file = $_FILES["file"];
        $fileName = $_FILES["file"]["name"];
        $fileTmpName = $_FILES["file"]["tmp_name"];

        $fileDestination = "" . $fileName;
        move_uploaded_file($fileTmpName, $fileDestination);
        header("Location: index.php?uploadsuccess");
    }
    ?>
</body>

</html>