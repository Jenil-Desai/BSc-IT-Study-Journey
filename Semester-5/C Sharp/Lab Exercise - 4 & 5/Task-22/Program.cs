using System;

namespace GotoDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 0;
        start:
            Console.WriteLine($"i = {i}");
            i++;
            if (i < 3)
                goto start;
            Console.WriteLine("End of program.");
        }
    }
}
