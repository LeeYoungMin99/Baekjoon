using System.Text;

class Program
{
    static void Main(string[] args)
    {
        string s = Console.ReadLine();

        var n = int.Parse(s);

        var temp = "long ";
        for (int i = 4; i <= n; i += 4)
            Console.Write(temp);

        Console.Write("int");
    }
}