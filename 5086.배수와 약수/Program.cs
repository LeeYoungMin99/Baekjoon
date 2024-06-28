using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());
        var sb = new StringBuilder();

        while (true)
        {
            var sa = sr.ReadLine()!.Split();

            var a = int.Parse(sa[0]);
            var b = int.Parse(sa[1]);

            if (a == 0 && b == 0)
                break;

            var n = a <= b && (b % a) == 0;
            var m = b <= a && (a % b) == 0;

            if (n) sw.WriteLine("factor");
            else if (m) sw.WriteLine("multiple");
            else sw.WriteLine("neither");
        }

        sw.Close();
    }
}