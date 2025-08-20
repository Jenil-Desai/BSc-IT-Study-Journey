using System;

namespace MultipleExceptionsDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            try
            {
                int[] arr = new int[2];
                arr[5] = 10; // IndexOutOfRangeException
                int a = 10, b = 0;
                int c = a / b; // DivideByZeroException
            }
            catch (IndexOutOfRangeException)
            {
                Console.WriteLine("Index out of range!");
            }
            catch (DivideByZeroException)
            {
                Console.WriteLine("Divide by zero!");
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Other exception: {ex.Message}");
            }
        }
    }
}
