using System;

namespace Task_6
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Start Number: ");
            int start = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter End Number: ");
            int end = Convert.ToInt32(Console.ReadLine());

            for (int i = start; i<= end; i++)
            {
                if (i % 2 == 0)
                {
                    Console.WriteLine(i);
                }
            }
        }
    }
}
