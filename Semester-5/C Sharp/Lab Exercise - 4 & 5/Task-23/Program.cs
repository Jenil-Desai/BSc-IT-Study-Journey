using System;

namespace StudentStructureDemo
{
    struct Student
    {
        public int RollNo;
        public string Name;
        public int Age;
    }
    class Program
    {
        static void Main(string[] args)
        {
            Student s;
            s.RollNo = 1;
            s.Name = "John";
            s.Age = 20;
            Console.WriteLine($"Roll No: {s.RollNo}, Name: {s.Name}, Age: {s.Age}");
        }
    }
}
