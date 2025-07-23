using System;

class ControlStructuresDemo
{
    static void Main()
    {
        // 1. Conditional Statements
        int number = 10;
        if (number > 5)
        {
            Console.WriteLine("Number is greater than 5.");
        }
        else if (number == 5)
        {
            Console.WriteLine("Number is equal to 5.");
        }
        else
        {
            Console.WriteLine("Number is less than 5.");
        }

        // 2. Switch Case
        char grade = 'A';
        switch (grade)
        {
            case 'A':
                Console.WriteLine("Excellent!");
                break;
            case 'B':
                Console.WriteLine("Good!");
                break;
            default:
                Console.WriteLine("Needs Improvement.");
                break;
        }
    }
}
