class Program
{
    public static void Main()
    {
        Console.WriteLine("Enter 1st Number: ");
        int n1 = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Enter 2nd Number: ");
        int n2 = Convert.ToInt32(Console.ReadLine());

        int temp;

        temp = n1;
        n1 = n2;
        n2 = temp;

        Console.WriteLine($"1st Number: {n1}");
        Console.WriteLine($"2nd Number: {n2}");
    }
}