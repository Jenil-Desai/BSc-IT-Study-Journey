class Program
{
    public static void Main()
    {
        const int VALUE_SIZE = 2;

        int[] values = new int[VALUE_SIZE + 1];
        for(int i = 0; i <= VALUE_SIZE;i++)
        {
            Console.WriteLine($"Enter {i+1} Number: ");
            values[i] = Convert.ToInt32(Console.ReadLine());
        }

        int highestValue = 0;
        for (int i = 0; i <= VALUE_SIZE; i++)
        {
            if (highestValue < values[i])
            {
                highestValue = values[i];
            }
        }

        Console.WriteLine($"Highest Value: {highestValue}");
    }
}