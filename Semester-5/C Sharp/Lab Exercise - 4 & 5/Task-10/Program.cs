using System;

class Program
{
  public static void Main()
  {
    int i = 1;
    Console.WriteLine("First 10 natural numbers using while loop:");
    while (i <= 10)
    {
      Console.Write(i + " ");
      i++;
    }

    Console.WriteLine();

    int j = 1;
    Console.WriteLine("First 10 natural numbers using do-while loop:");
    do
    {
      Console.Write(j + " ");
      j++;
    } while (j <= 10);

    Console.WriteLine();
  }
}
