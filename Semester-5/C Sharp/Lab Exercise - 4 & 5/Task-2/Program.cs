class Program
{
    public static void Main()
    {
        Console.WriteLine("1. Celsius");
        Console.WriteLine("\n2. Fahrenheit");
        Console.WriteLine("Select Temprature Unit: ");
        int tempratureUnit = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Enter Temprature: ");
        int temprature = Convert.ToInt32(Console.ReadLine());

        switch (tempratureUnit)
        {
            case 1:
                Console.WriteLine($"Faherenheit: {(temprature * (9 / 5)) + 32}");
                break;

            case 2:
                Console.WriteLine($"Celsius: {(temprature * 9 / 5) - 32}");
                break;

            default:
                Console.WriteLine("Invalid Temprature Unit");
                break;
        }
    }
}