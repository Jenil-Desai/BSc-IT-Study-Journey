<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Maximum Number Result</title>
    <link rel="stylesheet" href="result.css">
</head>

<body>
    <?php
    $max = 0;

    for ($i = 1; $i <= 3; $i++) {
        if ($max < $_POST["num" . $i]) {
            $max = $_POST["num" . $i];
        }
    }
    ?>
    <div class="container">
        <h1>Maximum Number Result</h1>
        <div class="result">
            <p>The maximum number among the three inputs is:</p>
            <h2 id="maxNumber"><?php echo $max; ?></h2>
        </div>
        <button onclick="goBack()">Go Back</button>
    </div>
</body>
<script>
    function goBack() {
        document.location.href = "/index.html";
    }
</script>

</html>