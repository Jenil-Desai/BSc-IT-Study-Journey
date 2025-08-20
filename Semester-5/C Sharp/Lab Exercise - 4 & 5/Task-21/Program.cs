using System;

namespace BreakContinueDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Break Example:");
            for (int i = 1; i <= 5; i++)
            {
                if (i == 3)
                    break;
                Console.WriteLine(i);
            }
            Console.WriteLine("Continue Example:");
            for (int i = 1; i <= 5; i++)
            {
                if (i == 3)
                    continue;
                Console.WriteLine(i);
            }
        }
    }
}
