using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());
        var sb = new StringBuilder();

        var s = sr.ReadLine()!;

        var t = int.Parse(s);
        var ar = new int[] { 25, 10, 5, 1 };
        for (int i = 0; i < t; ++i)
        {
            var c = int.Parse(sr.ReadLine()!);
            for (int j = 0, count = ar.Length; j < count; ++j)
            {
                sb.Append(c / ar[j]).Append(' ');
                c %= ar[j];
            }

            sb.AppendLine();
        }

        sw.Write(sb.ToString());
        sw.Close();
    }
}