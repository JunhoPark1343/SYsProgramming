using System;
public class IsAs
{
    static void Isas(object obj)
    {
        Console.WriteLine(obj + " is int : " + (obj is int));
        Console.WriteLine(obj + " is string : " + (obj is string));
    }
    static void AsOperator(object obj)
    {
        Console.WriteLine(obj + " as string == null : " + (obj as string == null));
    }
    public static void Main()
    {
        Isas(10);
        Isas("ABC");
        AsOperator(10);
        AsOperator("ABC");
    }
}

