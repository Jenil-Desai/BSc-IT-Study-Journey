using System;

namespace DivideByZeroExceptionDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                int a = 10, b = 0;
                int c = a / b;
                Console.WriteLine($"Result: {c}");
            }
            catch (DivideByZeroException ex)
            {
                Console.WriteLine("Error: Divide by zero!");
            }
        }
    }
}
