<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <div>
        <h1>Select Font and Color</h1>
        <form method='POST'>
            <label>Enter a string:</label><input type='text' name='inputString' required><br><br>
            <label>Choose a font:</label>
            <input type='radio' name='fontChoice' value='Arial' checked>Arial
            <input type='radio' name='fontChoice' value='Times New Roman'>Times New Roman
            <input type='radio' name='fontChoice' value='Courier New'>Courier New<br><br>
            <label>Choose font color:</label><input type='color' name='fontColor' value='#000'><br><br>
            <button type='submit'>Submit</button>
        </form>
        <?php
        if ($_SERVER['REQUEST_METHOD'] === 'POST') {
            $inputString = htmlspecialchars($_POST['inputString']);
            $fontChoice = $_POST['fontChoice'] ?? 'Arial';
            $fontColor = htmlspecialchars($_POST['fontColor']) ?? '#000';
            echo "<h1>Font Preview</h1><div style='font-family: $fontChoice; color: $fontColor; font-size: 24px;'>$inputString</div>";
        }
        ?>
    </div>
</body>

</html>