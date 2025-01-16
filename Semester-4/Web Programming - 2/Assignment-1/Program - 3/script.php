<html>
<style>
    table,
    td {
        border: 1px solid pink;
        border-collapse: collapse;
        padding: 10px;
    }

    tr>td:nth-last-child(1) {
        text-align: center;
    }
</style>

<body>
    <?php
    $a = 18;
    $b = 9;
    ?>

    <table>
        <tr>
            <td>
                <b>Operations</b>
            </td>
            <td>
                <b>Answers</b>
            </td>
        </tr>
        <tr>
            <td>
                <b>Value Of A : </b>
            </td>
            <td><?php echo $a; ?></td>
        </tr>
        <tr>
            <td>
                <b>Value Of B :</b>
            </td>
            <td><?php echo $b; ?></td>
        </tr>
        <tr>
            <td>
                <b>Addition Of A & B :</b>
            </td>
            <td><?php echo $a + $b; ?></td>
        </tr>
        <tr>
            <td>
                <b>Subtraction Of A & B</b>
            </td>
            <td><?php echo $a - $b; ?></td>
        </tr>
        <tr>
            <td>
                <b>Multiplication Of A & B : </b>
            </td>
            <td><?php echo $a * $b; ?></td>
        </tr>
        <tr>
            <td>
                <b>Divison Of A & B</b>
            </td>
            <td><?php echo $a / $b; ?></td>
        </tr>
    </table>
</body>

</html>