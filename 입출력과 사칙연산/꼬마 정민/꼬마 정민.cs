class Program
{
    static void Main(string[] args)
    {
        string[] s = Console.ReadLine().Split();

        var a = long.Parse(s[0]);
        var b = long.Parse(s[1]);
        var c = long.Parse(s[2]);

        Console.WriteLine(a + b + c);
    }
}