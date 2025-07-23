using System;

class ExceptionHandlingDemo
{
    static void Main()
    {
        try
        {
            Console.WriteLine("Enter a number:");
            int number = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter another number:");
            int divisor = Convert.ToInt32(Console.ReadLine());

            // This may throw a DivideByZeroException
            int result = number / divisor;

            Console.WriteLine($"Result: {result}");
        }
        catch (FormatException ex)
        {
            Console.WriteLine("Error: Please enter a valid number.");
            Console.WriteLine($"Details: {ex.Message}");
        }
        catch (DivideByZeroException ex)
        {
            Console.WriteLine("Error: Division by zero is not allowed.");
            Console.WriteLine($"Details: {ex.Message}");
        }
        catch (Exception ex)
        {
            Console.WriteLine("An unexpected error occurred.");
            Console.WriteLine($"Details: {ex.Message}");
        }
        finally
        {
            Console.WriteLine("Execution completed. Thank you!");
        }
    }
}
