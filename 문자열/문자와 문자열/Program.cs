using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var s = Console.ReadLine();
        var i = Console.ReadLine();

        var iValue = int.Parse(i);

        Console.Write(s[iValue - 1]);
    }
}