class Program
{
    public static void Main(string[] args)
    {
        for (int i = 1; i <= 10; i++)
        {
            Console.WriteLine(i);
        }

        int j = 1;
        while (j != 10)
        {
            Console.WriteLine(j);
            j++;
        }

        int k = 1;
        do
        {
            Console.WriteLine(k);
            k++;
        } while (k < 10);
    }
}
