using System;

namespace JaggedArrayDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            int[][] marks = new int[3][];
            marks[0] = new int[] { 85, 90 };
            marks[1] = new int[] { 78, 88, 92 };
            marks[2] = new int[] { 80 };
            for (int i = 0; i < marks.Length; i++)
            {
                Console.Write($"Student {i + 1} marks: ");
                for (int j = 0; j < marks[i].Length; j++)
                {
                    Console.Write(marks[i][j] + " ");
                }
                Console.WriteLine();
            }
        }
    }
}
