using System;

namespace MenuDrivenProgram
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                Console.WriteLine("\nMenu:");
                Console.WriteLine("1. Factorial");
                Console.WriteLine("2. Prime Check");
                Console.WriteLine("3. Even or Odd");
                Console.WriteLine("4. Exit");
                Console.Write("Enter your choice: ");
                int choice = Convert.ToInt32(Console.ReadLine());
                switch (choice)
                {
                    case 1:
                        Console.Write("Enter number: ");
                        int n = Convert.ToInt32(Console.ReadLine());
                        long fact = 1;
                        for (int i = 1; i <= n; i++)
                            fact *= i;
                        Console.WriteLine($"Factorial: {fact}");
                        break;
                    case 2:
                        Console.Write("Enter number: ");
                        int num = Convert.ToInt32(Console.ReadLine());
                        bool isPrime = num > 1;
                        for (int i = 2; i <= Math.Sqrt(num); i++)
                            if (num % i == 0) { isPrime = false; break; }
                        Console.WriteLine(isPrime ? "Prime" : "Not Prime");
                        break;
                    case 3:
                        Console.Write("Enter number: ");
                        int val = Convert.ToInt32(Console.ReadLine());
                        Console.WriteLine(val % 2 == 0 ? "Even" : "Odd");
                        break;
                    case 4:
                        return;
                    default:
                        Console.WriteLine("Invalid choice.");
                        break;
                }
            }
        }
    }
}
