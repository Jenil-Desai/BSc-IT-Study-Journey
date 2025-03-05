<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form</title>
    <!-- Bootstrap CSS -->
    <link href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/css/bootstrap.min.css" rel="stylesheet">
</head>

<body>
    <div class="container mt-5">
        <form action="display.php" method="post" enctype="multipart/form-data">
            <!-- Name - Textbox -->
            <div class="form-group">
                <label for="name">Name:</label>
                <input type="text" class="form-control" id="name" name="name">
            </div>

            <!-- City - Drop Down -->
            <div class="form-group">
                <label for="city">City:</label>
                <select class="form-control" id="city" name="city">
                    <option value="new_york">New York</option>
                    <option value="london">London</option>
                    <option value="paris">Paris</option>
                    <option value="tokyo">Tokyo</option>
                </select>
            </div>

            <!-- Gender - Radio Button -->
            <div class="form-group">
                <label>Gender:</label><br>
                <div class="form-check form-check-inline">
                    <input class="form-check-input" type="radio" id="male" name="gender" value="male">
                    <label class="form-check-label" for="male">Male</label>
                </div>
                <div class="form-check form-check-inline">
                    <input class="form-check-input" type="radio" id="female" name="gender" value="female">
                    <label class="form-check-label" for="female">Female</label>
                </div>
            </div>

            <!-- Hobby - Checkbox -->
            <div class="form-group">
                <label>Hobby:</label><br>
                <div class="form-check form-check-inline">
                    <input class="form-check-input" type="checkbox" id="reading" name="hobby[]" value="reading">
                    <label class="form-check-label" for="reading">Reading</label>
                </div>
                <div class="form-check form-check-inline">
                    <input class="form-check-input" type="checkbox" id="traveling" name="hobby[]" value="traveling">
                    <label class="form-check-label" for="traveling">Traveling</label>
                </div>
                <div class="form-check form-check-inline">
                    <input class="form-check-input" type="checkbox" id="sports" name="hobby[]" value="sports">
                    <label class="form-check-label" for="sports">Sports</label>
                </div>
            </div>

            <!-- Upload Image -->
            <div class="form-group">
                <label for="image">Upload Image:</label>
                <input type="file" class="form-control-file" id="image" name="image">
            </div>

            <!-- Submit Button -->
            <button type="submit" class="btn btn-primary">Submit</button>
        </form>
    </div>

    <!-- Bootstrap JS and dependencies -->
    <script src="https://code.jquery.com/jquery-3.5.1.slim.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.5.4/dist/umd/popper.min.js"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.5.2/js/bootstrap.min.js"></script>
</body>

</html>