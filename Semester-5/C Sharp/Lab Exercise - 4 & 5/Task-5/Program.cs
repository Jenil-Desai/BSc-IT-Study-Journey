using System;

namespace Task_5
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter A Year: ");
            int year = Convert.ToInt32(Console.ReadLine());
            if (year % 4 == 0)
            {
                Console.WriteLine("Leap Year");
            } else
            {
                Console.WriteLine("Not Leap Year");
            }
        }
    }
}
