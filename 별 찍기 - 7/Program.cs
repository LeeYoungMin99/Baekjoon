using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());
        var sb = new StringBuilder();

        var ns = sr.ReadLine()!;

        var n = int.Parse(ns);

        for (int i = 0, iCount = n; i < iCount; ++i)
        {
            for (int j = 1, jCount = n * 2 - 1; j <= jCount && j <= n + i; ++j)
                sb.Append(n - i <= j ? '*' : ' ');

            sb.AppendLine();
        }

        for (int i = n - 2; 0 <= i; --i)
        {
            for (int j = 1, jCount = n * 2 - 1; j <= jCount && j <= n + i; ++j)
                sb.Append(n - i <= j ? '*' : ' ');

            sb.AppendLine();
        }

        sw.Write(sb.ToString());
        sw.Close();
    }
}