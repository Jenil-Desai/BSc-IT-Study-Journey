using System;

namespace OperatorsDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 10, b = 5;
            // Arithmetic Operators
            Console.WriteLine($"Addition: {a + b}");
            Console.WriteLine($"Subtraction: {a - b}");
            Console.WriteLine($"Multiplication: {a * b}");
            Console.WriteLine($"Division: {a / b}");

            // Relational Operators
            Console.WriteLine($"a > b: {a > b}");
            Console.WriteLine($"a < b: {a < b}");
            Console.WriteLine($"a == b: {a == b}");

            // Logical Operators
            bool x = true, y = false;
            Console.WriteLine($"x && y: {x && y}");
            Console.WriteLine($"x || y: {x || y}");
            Console.WriteLine($"!x: {!x}");
        }
    }
}
