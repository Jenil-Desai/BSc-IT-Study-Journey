class Program
{
  static void Main()
  {
    Console.Write("Enter a number: ");
    string input = Console.ReadLine();
    int number;

    if (!int.TryParse(input, out number))
    {
      Console.WriteLine("Invalid input. Please enter a valid integer.");
      return;
    }

    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0)
    {
      int digit = number % 10;
      reversedNumber = reversedNumber * 10 + digit;
      number /= 10;
    }

    Console.WriteLine($"Reversed Number: {reversedNumber}");

    if (originalNumber == reversedNumber)
    {
      Console.WriteLine("The number is a palindrome.");
    }
    else
    {
      Console.WriteLine("The number is not a palindrome.");
    }
  }
}
