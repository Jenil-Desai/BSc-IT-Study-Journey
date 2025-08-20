using System;

namespace EnumDaysDemo
{
    enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday }
    class Program
    {
        static void Main(string[] args)
        {
            foreach (Days day in Enum.GetValues(typeof(Days)))
            {
                Console.WriteLine(day);
            }
        }
    }
}
