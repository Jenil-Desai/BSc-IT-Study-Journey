class Program
{
    public static void Main()
    {
        Console.WriteLine("Enter a Age: ");
        int age = Convert.ToInt32(Console.ReadLine());

        if (age < 18)
        {
            Console.WriteLine("You are a minor.");
        }
        else
        {
            Console.WriteLine("You are an adult.");
        }
    }
}
