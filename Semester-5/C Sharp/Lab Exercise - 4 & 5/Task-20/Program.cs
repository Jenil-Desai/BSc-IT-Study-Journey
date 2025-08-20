using System;

namespace ArrayForeachDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = { 1, 2, 3, 4, 5 };
            Console.WriteLine("Array elements:");
            foreach (int item in arr)
            {
                Console.WriteLine(item);
            }
        }
    }
}
