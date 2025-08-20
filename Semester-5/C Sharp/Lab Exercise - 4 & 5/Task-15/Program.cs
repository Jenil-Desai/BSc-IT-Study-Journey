using System;

namespace ImplicitExplicitConversion
{
    class Program
    {
        static void Main(string[] args)
        {
            // Implicit Conversion
            int num = 123;
            double doubleNum = num; // int to double (implicit)
            Console.WriteLine($"Implicit Conversion: int {num} to double {doubleNum}");

            // Explicit Conversion
            double d = 123.45;
            int i = (int)d; // double to int (explicit)
            Console.WriteLine($"Explicit Conversion: double {d} to int {i}");
        }
    }
}
