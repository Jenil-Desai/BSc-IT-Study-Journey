using System;

struct MyStruct
{
    public int Value;

    public MyStruct(int value)
    {
        Value = value;
    }

    public void Display()
    {
        Console.WriteLine($"Struct Value: {Value}");
    }
}

class MyClass
{
    public int Value;

    public MyClass(int value)
    {
        Value = value;
    }

    public void Display()
    {
        Console.WriteLine($"Class Value: {Value}");
    }
}

class Program
{
    static void Main()
    {
        // Structure: Value Type
        MyStruct struct1 = new MyStruct(10);
        MyStruct struct2 = struct1; // Creates a copy
        struct2.Value = 20;

        Console.WriteLine("Structure:");
        struct1.Display(); // Output: Struct Value: 10
        struct2.Display(); // Output: Struct Value: 20

        // Class: Reference Type
        MyClass class1 = new MyClass(10);
        MyClass class2 = class1; // References the same object
        class2.Value = 20;

        Console.WriteLine("\nClass:");
        class1.Display(); // Output: Class Value: 20
        class2.Display(); // Output: Class Value: 20
    }
}
