using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());
        var sb = new StringBuilder();

        var ns = sr.ReadLine()!;
        var a = sr.ReadLine()!.Split();
        var b = sr.ReadLine()!.Split();
        var ms = sr.ReadLine()!;
        var c = sr.ReadLine()!.Split();

        var n = int.Parse(ns);
        var m = int.Parse(ms);

        for (int i = n - 1; 0 <= i && 0 < m; --i)
        {
            if (0 == int.Parse(a[i]))
            {
                sb.Append(b[i]).Append(' ');
                --m;
            }
        }

        for (int i = 0, count = m; i < count; ++i)
        {
            sb.Append(c[i]).Append(' ');
        }

        sw.WriteLine(sb.ToString());
        sw.Close();
    }
}