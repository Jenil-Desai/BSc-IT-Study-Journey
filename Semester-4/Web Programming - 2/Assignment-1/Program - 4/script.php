<html>
<style>
    h1 {
        text-align: center;
    }

    div {
        display: flex;
        justify-content: center;
    }

    table,
    td {
        border-collapse: collapse;
        border: 1px solid pink;
        padding: 10px;
    }

    tr>td:nth-last-child(1) {
        text-align: center;
    }
</style>

<body>
    <?php
    $sub = [85, 78, 92, 88, 76];
    $total = 0;
    for ($i = 0; $i < count($sub); $i++) {
        $total += $sub[$i];
    }
    ?>
    <h1>Mark Sheet</h1>
    <div>
        <table>
            <tr>
                <td>
                    <b>
                        Subjects
                    </b>
                </td>
                <td>
                    <b>
                        Marks
                    </b>
                </td>
            </tr>
            <tr>
                <td>
                    <b>
                        Subject 1
                    </b>
                </td>
                <td>
                    <?php echo $sub[0]; ?>
                </td>
            </tr>
            <tr>
                <td>
                    <b>
                        Subject 2
                    </b>
                </td>
                <td>
                    <?php echo $sub[1]; ?>
                </td>
            </tr>
            <tr>
                <td>
                    <b>
                        Subject 3
                    </b>
                </td>
                <td>
                    <?php echo $sub[2]; ?>
                </td>
            </tr>
            <tr>
                <td>
                    <b>
                        Subject 4
                    </b>
                </td>
                <td>
                    <?php echo $sub[3]; ?>
                </td>
            </tr>
            <tr>
                <td>
                    <b>
                        Subject 5
                    </b>
                </td>
                <td>
                    <?php echo $sub[4]; ?>
                </td>
            </tr>
            <tr>
                <td>
                    <b>
                        Total
                    </b>
                </td>
                <td>
                    <?php echo $total; ?>
                </td>
            </tr>
            <tr>
                <td>
                    <b>
                        Percentage
                    </b>
                </td>
                <td>
                    <?php echo $total / count($sub); ?>
                </td>
            </tr>
            <tr>
                <td>
                    <b>
                        Grade
                    </b>
                </td>
                <td>
                    <?php
                    $averageMarks = $total / count($sub);
                    if ($averageMarks >= 90) {
                        $grade = 'A+';
                    } elseif ($averageMarks >= 80) {
                        $grade = 'A';
                    } elseif ($averageMarks >= 70) {
                        $grade = 'B';
                    } elseif ($averageMarks >= 60) {
                        $grade = 'C';
                    } elseif ($averageMarks >= 50) {
                        $grade = 'D';
                    } else {
                        $grade = 'F';
                    }
                    echo $grade;
                    ?>
                </td>
            </tr>
        </table>
    </div>
</body>

</html>