class Program
{
    public static void Main()
    {
        Console.WriteLine("Enter 1st number:");
        int firstNumber = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Enter 2nd number:");
        int secondNumber = Convert.ToInt32(Console.ReadLine());

        // priyank.doshi@atmiyauni.ac.in

        int temp = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temp;

        Console.WriteLine("After swapping:");
        Console.WriteLine("1st number: " + firstNumber);
        Console.WriteLine("2nd number: " + secondNumber);
    }
}
