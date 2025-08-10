using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task_7
{
    class Program
    {
        static void Main(string[] args)
        {
            int sum = 0,product = 1;
            for (int i = 1; i<= 10; i++)
            {
                sum += i;
                product *= i;
            }
            Console.WriteLine($"Sum Of 1 -> 10: {sum}");
            Console.WriteLine($"Product Of 1 -> 10: {product}");
        }
    }
}
