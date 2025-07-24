class program
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Enter a number: ");
        int number = Convert.ToInt32(Console.ReadLine());

        if (number > 0)
        {
            Console.WriteLine("Number is positive");
        }
        else if (number == 0)
        {
            Console.WriteLine("Number is 0");
        }
        else
        {
            Console.WriteLine("Number is negative");
        }
        Console.ReadLine();
    }
}
