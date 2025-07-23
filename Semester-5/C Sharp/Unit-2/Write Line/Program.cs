using System;

class Program
{
    static void Main()
    {
        // 1. Printing a simple string
        Console.WriteLine("Hello, World!");

        // 2. Printing integers
        int number = 42;
        Console.WriteLine("Integer value: " + number);

        // 3. Printing floating-point numbers
        double pi = 3.14159;
        Console.WriteLine("Double value: " + pi);

        // 4. Printing boolean values
        bool isCSharpFun = true;
        Console.WriteLine("Is C# fun? " + isCSharpFun);

        // 5. Using string interpolation
        string name = "Alice";
        int age = 25;
        Console.WriteLine($"Name: {name}, Age: {age}");

        // 6. Printing multiple values with format specifiers
        Console.WriteLine("Formatted output: {0}, {1}, {2}", number, pi, isCSharpFun);

        // 7. Printing an array
        int[] numbers = { 1, 2, 3, 4, 5 };
        Console.WriteLine("Array values: " + string.Join(", ", numbers));

        // 8. Printing objects
        DateTime now = DateTime.Now;
        Console.WriteLine("Current Date and Time: " + now);

        // 9. Printing special characters
        Console.WriteLine("Special characters: \nNew Line, \tTab, \\Backslash");

        // 10. Printing without a new line (using Write)
        Console.Write("This is ");
        Console.Write("on the same line.");
    }
}
