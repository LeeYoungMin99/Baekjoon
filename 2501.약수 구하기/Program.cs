using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());
        var sb = new StringBuilder();
        var sa = sr.ReadLine()!.Split();

        var n = int.Parse(sa[0]);
        var k = int.Parse(sa[1]);
        var r = 0;

        for (int i = 1; i <= n; ++i)
        {
            var a = n % i;
            if (a != 0) continue;

            if (--k != 0) continue;

            r = i;
            break;
        }

        sw.WriteLine(r);
        sw.Close();
    }
}