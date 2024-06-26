using System.Text;

class Program
{
    static void Main(string[] args)
    {
        for (int i = 0; i < 100; ++i)
        {
            var s = Console.ReadLine();

            if (string.IsNullOrEmpty(s))
                break;

            Console.WriteLine(s);
        }
    }
}