using System;

namespace TryCatchFinallyDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                int a = 10, b = 0;
                int c = a / b;
            }
            catch (DivideByZeroException)
            {
                Console.WriteLine("Exception caught: Divide by zero");
            }
            finally
            {
                Console.WriteLine("Finally block executed");
            }
        }
    }
}
