class Program
{
  static void Main()
  {
    // Integer types
    int intVar = 42;
    long longVar = 1234567890L;
    short shortVar = 32000;
    byte byteVar = 255;

    // Floating point types
    float floatVar = 3.14f;
    double doubleVar = 2.718281828;
    decimal decimalVar = 12345.6789m;

    // Character and string types
    char charVar = 'A';
    string stringVar = "Hello, C#!";

    // Boolean type
    bool boolVar = true;

    // Display variables
    Console.WriteLine("Integer (int): " + intVar);
    Console.WriteLine("Long (long): " + longVar);
    Console.WriteLine("Short (short): " + shortVar);
    Console.WriteLine("Byte (byte): " + byteVar);
    Console.WriteLine("Float (float): " + floatVar);
    Console.WriteLine("Double (double): " + doubleVar);
    Console.WriteLine("Decimal (decimal): " + decimalVar);
    Console.WriteLine("Character (char): " + charVar);
    Console.WriteLine("String (string): " + stringVar);
    Console.WriteLine("Boolean (bool): " + boolVar);
  }
}
