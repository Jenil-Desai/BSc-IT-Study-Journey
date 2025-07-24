class Program
{
    public static void Main()
    {
        int rows = 4;
        for (int i = 1; i <= rows; i++)
        {
            for (int j = i; j >= 1; j--)
            {
                Console.Write(j + " ");
            }
            Console.WriteLine();
        }
    }
}
