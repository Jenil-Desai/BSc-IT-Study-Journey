<?php

$name = $_POST['name'];
$city = $_POST['city'];
$gender = $_POST['gender'];
$hobbies =  $_POST['hobby'];
$image = $_FILES['image'];

echo "<h2>Form Data</h2>";
echo "Name: " . $name . "<br>";
echo "City: " . $city . "<br>";
echo "Gender: " . $gender . "<br>";
echo "Hobbies: " . implode(", ", $hobbies) . "<br>";

if ($image['error'] == 0) {
    $imagePath = 'uploads/' . $image['name'];
    if (move_uploaded_file($image['tmp_name'], $imagePath)) {
        echo "Image: <img src='$imagePath' alt='Uploaded Image' width='100'><br>";
    } else {
        echo "Image upload failed.<br>";
    }
} else {
    echo "No image uploaded.<br>";
}
