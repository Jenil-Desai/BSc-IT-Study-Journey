class Program
{
    public static void Main()
    {
        // string formattedString = String.Format(format, args);
        // Console.WriteLine(formattedString);

        string name = "Alice";
        int age = 25;
        string r1 = String.Format("Name: {0}, Age: {1}", name, age);
        Console.WriteLine(r1); // Output: Name: Alice, Age: 25

        double price = 1234.5678;
        string r2 = String.Format("Price: {0:C}", price); // Currency format
        Console.WriteLine(r2); // Output: Price: ₹1,234.57 (based on locale)

        DateTime today = DateTime.Now;
        string r3 = String.Format("Today is {0:dddd, MMMM dd, yyyy}", today);
        Console.WriteLine(r3); // Output: Today is Friday, July 18, 2025

        string r4 = String.Format("{0,-10} | {1,10}", "Item", "Price");
        Console.WriteLine(r4);// Item       |      Price
    }
}
