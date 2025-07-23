using System;

class Program
{
    static void Main()
    {
        // Demonstrating 'for' loop
        Console.WriteLine("For Loop:");
        for (int i = 1; i <= 5; i++)
        {
            Console.WriteLine($"Iteration {i}");
        }

        // Demonstrating 'while' loop
        Console.WriteLine("\nWhile Loop:");
        int count = 1;
        while (count <= 5)
        {
            Console.WriteLine($"Iteration {count}");
            count++;
        }

        // Demonstrating 'do-while' loop
        Console.WriteLine("\nDo-While Loop:");
        int num = 1;
        do
        {
            Console.WriteLine($"Iteration {num}");
            num++;
        } while (num <= 5);

        // Demonstrating 'foreach' loop
        Console.WriteLine("\nForeach Loop:");
        string[] fruits = { "Apple", "Banana", "Cherry", "Date", "Elderberry" };
        foreach (string fruit in fruits)
        {
            Console.WriteLine($"Fruit: {fruit}");
        }
    }
}
/*Explanation:
For Loop: Iterates a fixed number of times, controlled by an initialization, condition, and increment.
While Loop: Executes as long as the condition is true, checking the condition before each iteration.
Do-While Loop: Similar to while, but guarantees at least one execution since the condition is checked after the loop body.
Foreach Loop: Iterates over elements in a collection (e.g., arrays, lists).
*/
