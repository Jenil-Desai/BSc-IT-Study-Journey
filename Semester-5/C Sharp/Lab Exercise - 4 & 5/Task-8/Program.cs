using System;

namespace Task_8
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Your Number: ");
            int num = Convert.ToInt32(Console.ReadLine());

            for (int i = num; i >= 1; i--)
            {
                Console.WriteLine(i);
            }
        }
    }
}
