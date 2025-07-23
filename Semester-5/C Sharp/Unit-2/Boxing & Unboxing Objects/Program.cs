class Program
{
    static void Main()
    {
        // Boxing: Converting a value type (int) to a reference type (object)
        int num = 42; // Value type
        object obj = num; // Boxing
        Console.WriteLine("Boxed value: " + obj); // Output: Boxed value: 42

        // Unboxing: Extracting the value type from the object
        int unboxedNum = (int)obj; // Unboxing
        Console.WriteLine("Unboxed value: " + unboxedNum); // Output: Unboxed value: 42
    }
}
