using System;

namespace SimpleCalculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter first number:");
            double num1 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Enter second number:");
            double num2 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Enter operator (+, -, *, /):");
            char op = Convert.ToChar(Console.ReadLine());
            double result = 0;
            switch (op)
            {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    if (num2 != 0)
                        result = num1 / num2;
                    else
                        Console.WriteLine("Cannot divide by zero.");
                    break;
                default:
                    Console.WriteLine("Invalid operator.");
                    break;
            }
            Console.WriteLine($"Result: {result}");
        }
    }
}
