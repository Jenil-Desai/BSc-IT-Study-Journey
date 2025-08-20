using System;

namespace BoxingUnboxingDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = 10;
            // Boxing
            object obj = num;
            Console.WriteLine($"Boxing: int {num} to object {obj}");

            // Unboxing
            int unboxed = (int)obj;
            Console.WriteLine($"Unboxing: object {obj} to int {unboxed}");
        }
    }
}
