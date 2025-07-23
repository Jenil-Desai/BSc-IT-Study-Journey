using System;

class Jump
{
    static void Main()
    {
        Console.WriteLine("Demonstrating 'break':");
        for (int i = 0; i < 5; i++)
        {
            if (i == 3)
                break; // Exits the loop when i equals 3
            Console.WriteLine($"Value: {i}");
        }

        Console.WriteLine("\nDemonstrating 'continue':");
        for (int i = 0; i < 5; i++)
        {
            if (i == 2)
                continue; // Skips the rest of the loop when i equals 2
            Console.WriteLine($"Value: {i}");
        }

        Console.WriteLine("\nDemonstrating 'goto':");
        int x = 1;
        if (x == 1)
            goto Label; // Jumps to the specified label
        Console.WriteLine("This will not execute.");
    Label:
        Console.WriteLine("Jumped to the label!");

    }
}
