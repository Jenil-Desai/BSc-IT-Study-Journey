using System;

namespace Experiment
{
    class Program
    {
        public static void Main()
        {
            const int TOTAL_SUBJECT = 3;

            int[] subjectMarks = new int[TOTAL_SUBJECT];
            int totalMarks = 0;
            float percentage = 0.00f;
            char grade = 'Z';


            for (int i = 0; i <  TOTAL_SUBJECT; i++)
            {
                again:
                Console.WriteLine($"Enter Marks For {i+1} Subject : ");
                int value = Convert.ToInt32(Console.ReadLine());

                if (value <= 100 && value >= 0)
                {
                    subjectMarks[i] = value;
                } else
                {
                    goto again;
                }

                totalMarks += subjectMarks[i];
            }

            percentage = totalMarks / TOTAL_SUBJECT;
            if (percentage >= 90)
            {
                grade = 'A';
            } else if (percentage >= 80 && percentage < 90)
            {
                grade = 'B';
            } else if (percentage >= 70 && percentage < 80)
            {
                grade = 'C';
            } else if (percentage >= 60 && percentage < 70)
            {
                grade = 'D';
            }
            else if (percentage >= 50 && percentage < 60)
            {
                grade = 'E';
            } else
            {
                grade = 'F';
            }


            Console.WriteLine("=======================================");

            Console.WriteLine("------------------MARKS----------------");
            for (int i = 0; i < TOTAL_SUBJECT; i++)
            {
                Console.WriteLine($"{i+1}. Subject Marks ------------ {subjectMarks[i]}");
            }

            Console.WriteLine("------------------RESULT---------------");
            Console.WriteLine($"Total ------------------------------ {totalMarks}");
            Console.WriteLine($"Percentage ------------------------- {percentage}%");
            Console.WriteLine($"Grade ------------------------------ {grade}");

            Console.WriteLine("=======================================");
        }
    }
}
