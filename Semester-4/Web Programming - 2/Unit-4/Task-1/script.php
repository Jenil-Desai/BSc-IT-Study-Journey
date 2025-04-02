<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Student Information System</title>
    <script src="https://cdn.jsdelivr.net/npm/@tailwindcss/browser@4"></script>
</head>

<body class="bg-gray-100 p-6">
    <div class="max-w-3xl mx-auto bg-white rounded-lg shadow-md p-6">
        <h2 class="text-2xl font-bold text-center text-gray-800 mb-6">Student Information Form</h2>
        <form method="post" action="" class="space-y-4">
            <div class="grid grid-cols-1 md:grid-cols-2 gap-4">
                <div class="flex flex-col">
                    <label for="rollno" class="mb-1 text-gray-700 font-medium">Roll No:</label>
                    <input type="text" id="rollno" name="rollno" required class="border border-gray-300 rounded-md px-3 py-2 focus:outline-none focus:ring-2 focus:ring-blue-500">
                </div>
                <div class="flex flex-col">
                    <label for="name" class="mb-1 text-gray-700 font-medium">Name:</label>
                    <input type="text" id="name" name="name" required class="border border-gray-300 rounded-md px-3 py-2 focus:outline-none focus:ring-2 focus:ring-blue-500">
                </div>
                <div class="flex flex-col">
                    <label for="percentage" class="mb-1 text-gray-700 font-medium">Percentage:</label>
                    <input type="number" id="percentage" name="percentage" step="0.01" min="0" max="100" required class="border border-gray-300 rounded-md px-3 py-2 focus:outline-none focus:ring-2 focus:ring-blue-500">
                </div>
                <div class="flex flex-col">
                    <label for="city" class="mb-1 text-gray-700 font-medium">City:</label>
                    <input type="text" id="city" name="city" required class="border border-gray-300 rounded-md px-3 py-2 focus:outline-none focus:ring-2 focus:ring-blue-500">
                </div>
                <div class="flex flex-col">
                    <label for="state" class="mb-1 text-gray-700 font-medium">State:</label>
                    <input type="text" id="state" name="state" required class="border border-gray-300 rounded-md px-3 py-2 focus:outline-none focus:ring-2 focus:ring-blue-500">
                </div>
                <div class="flex flex-col">
                    <label for="phone" class="mb-1 text-gray-700 font-medium">Phone:</label>
                    <input type="tel" id="phone" name="phone" required class="border border-gray-300 rounded-md px-3 py-2 focus:outline-none focus:ring-2 focus:ring-blue-500">
                </div>
            </div>
            <div class="flex justify-center mt-6">
                <input type="submit" value="Submit" name="submit" class="bg-blue-500 hover:bg-blue-600 text-white font-medium py-2 px-6 rounded-md cursor-pointer transition duration-200">
            </div>
        </form>

        <div class="mt-8 overflow-x-auto">
            <table class="min-w-full bg-white border border-gray-200 rounded-lg overflow-hidden">
                <thead class="bg-gray-100">
                    <tr>
                        <th class="px-4 py-2 text-left text-gray-700">Roll No</th>
                        <th class="px-4 py-2 text-left text-gray-700">Name</th>
                        <th class="px-4 py-2 text-left text-gray-700">Percentage</th>
                        <th class="px-4 py-2 text-left text-gray-700">City</th>
                        <th class="px-4 py-2 text-left text-gray-700">State</th>
                        <th class="px-4 py-2 text-left text-gray-700">Phone</th>
                        <th class="px-4 py-2 text-left text-gray-700">Actions</th>
                        <th class="px-4 py-2 text-left text-gray-700"></th>
                    </tr>
                </thead>
                <tbody>
                    <?php
                    $con = mysqli_connect("xampp_db", "root", "root", "Semester4");
                    if (!$con) {
                        die("Connection failed: " . mysqli_connect_error());
                    }

                    $sql = "SELECT * FROM student";
                    $result = mysqli_query($con, $sql);

                    while ($row = mysqli_fetch_assoc($result)) {
                        echo "<tr class='border-t border-gray-200 hover:bg-gray-50'>";
                        echo "<td class='px-4 py-2'>" . $row["Rollno"] . "</td>";
                        echo "<td class='px-4 py-2'>" . $row["Name"] . "</td>";
                        echo "<td class='px-4 py-2'>" . $row["Percentage"] . "</td>";
                        echo "<td class='px-4 py-2'>" . $row["City"] . "</td>";
                        echo "<td class='px-4 py-2'>" . $row["State"] . "</td>";
                        echo "<td class='px-4 py-2'>" . $row["Phone"] . "</td>";
                        echo "<td class='px-4 py-2'><a href='delete.php?id=" . $row['id'] . "' class='text-red-500 hover:text-red-700'>Delete</a></td>";
                        echo "<td class='px-4 py-2'><a href='edit.php?id=" . $row['id'] . "' class='text-blue-500 hover:text-blue-700'>Edit</a></td>";
                        echo "</tr>";
                    }
                    mysqli_close($con);
                    ?>
                </tbody>
            </table>
        </div>
    </div>

    <?php
    if (isset($_POST["submit"])) {
        $rollno = $_POST["rollno"];
        $name = $_POST["name"];
        $percentage = $_POST["percentage"];
        $city = $_POST["city"];
        $state = $_POST["state"];
        $phone = $_POST["phone"];

        $con = mysqli_connect("xampp_db", "root", "root", "Semester4");
        if (!$con) {
            die("Connection failed: " . mysqli_connect_error());
        }

        $sql = "INSERT INTO student (rollno, name, percentage, city, state, phone) VALUES ('$rollno', '$name', '$percentage', '$city', '$state', '$phone')";
        if (mysqli_query($con, $sql)) {
            echo "New record created successfully";
        } else {
            echo "Error: " . $sql . "<br>" . mysqli_error($con);
        }
        mysqli_close($con);
    }
    ?>
</body>

</html>