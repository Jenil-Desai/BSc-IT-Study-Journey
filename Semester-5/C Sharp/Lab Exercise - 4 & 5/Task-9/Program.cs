using System;

class Program
{
  public static void Main()
  {
    Console.WriteLine("Enter the number: ");
    int number = Convert.ToInt32(Console.ReadLine());

    for (int i = 1; i <= 10; i++)
    {
      int result = number * i;
      Console.WriteLine($"{number} x {i} = {result}");
    }
  }
}
