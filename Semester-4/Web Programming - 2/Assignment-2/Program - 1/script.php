<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculation Result</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f4f4f4;
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }

        .result-container {
            background: white;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 2px 10px rgba(0, 0, 0, 0.1);
            width: 300px;
            text-align: center;
        }

        h1 {
            font-size: 24px;
            margin-bottom: 20px;
        }

        .result {
            margin-top: 20px;
            font-size: 18px;
            font-weight: bold;
        }

        .back-button {
            margin-top: 20px;
            padding: 10px 15px;
            background-color: #007BFF;
            color: white;
            border: none;
            border-radius: 4px;
            cursor: pointer;
            font-size: 16px;
            transition: background-color 0.3s;
        }

        .back-button:hover {
            background-color: #0056b3;
        }
    </style>
    <?php
    function addition($num1, $num2)
    {
        return ($num1 + $num2);
    }

    function subtraction($num1, $num2)
    {
        return ($num1 - $num2);
    }

    function multiplication($num1, $num2)
    {
        return ($num1 * $num2);
    }

    function division($num1, $num2)
    {
        return ($num1 / $num2);
    }
    ?>
</head>

<body>
    <div class="result-container">
        <h1>Calculation Result</h1>
        <div class="result">
            <?php
            $num1 = floatval($_POST['num1']);
            $num2 = floatval($_POST['num2']);
            $operation = $_POST['operation'];

            switch ($operation) {
                case 'add':
                    echo "Result: " . addition($num1, $num2);
                    break;
                case 'subtract':
                    echo "Result: " . subtraction($num1, $num2);
                    break;
                case 'multiply':
                    echo "Result: " . multiplication($num1, $num2);
                    break;
                case 'divide':
                    if ($num2 != 0) {
                        echo "Result: " . division($num1, $num2);
                    } else {
                        echo "Error: Division by zero";
                    }
                    break;
                default:
                    echo "Invalid operation";
            }
            ?>
        </div>
        <button class="back-button" onclick="window.history.back();">Back</button>
    </div>
</body>

</html>