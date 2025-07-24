class Program
{
    public static void Main()
    {
        for (int i = 10; i >= 1; i--)
        {
            Console.Write(i + " ");
        }
        Console.WriteLine();

        int j = 10;
        while (j >= 1)
        {
            Console.Write(j + " ");
            j--;
        }
        Console.WriteLine();

        int k = 10;
        do
        {
            Console.Write(k + " ");
            k--;
        } while (k >= 1);
        Console.WriteLine();
    }
}
