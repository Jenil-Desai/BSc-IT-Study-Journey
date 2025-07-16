using System;

namespace Motorsports
{
    public class Cars
    {
        public static void displayBrand()
        {
            Console.WriteLine("Hyundai");
        }
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        Motorsports.Cars.displayBrand();
    }
}