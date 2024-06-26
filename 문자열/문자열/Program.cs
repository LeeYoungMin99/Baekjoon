using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var t = Console.ReadLine();

        var tValue = int.Parse(t);

        for (int i = 0; i < tValue; ++i)
        {
            var s = Console.ReadLine();

            Console.Write(s[0]);
            Console.WriteLine(s[^1]);
        }
    }
}