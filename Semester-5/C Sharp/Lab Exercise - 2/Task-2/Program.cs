public class Program
{
    public static void Main()
    {
        Console.WriteLine("Enter first integer:");
        int a = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter second integer: ");
        int b = Convert.ToInt32(Console.ReadLine());

        int sum = a + b;
        Console.WriteLine("The sum is: " + sum);
    }
}
