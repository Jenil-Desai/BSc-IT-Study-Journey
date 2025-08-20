class Program
{
  public static void Main()
  {
    Console.Write("Enter a number: ");
    int number = int.Parse(Console.ReadLine());
    int sum = 0, n = Math.Abs(number);

    while (n > 0)
    {
      sum += n % 10;
      n /= 10;
    }

    Console.WriteLine($"Sum of digits: {sum}");
  }
}
