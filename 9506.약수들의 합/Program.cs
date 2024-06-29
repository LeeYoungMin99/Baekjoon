using System.IO;
using System;
using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());
        var sb = new StringBuilder();
        var sb2 = new StringBuilder();

        while (true)
        {
            var s = sr.ReadLine()!;
            var n = int.Parse(s);

            if (n == -1)
                break;

            var t = 1;
            for (int i = 2; i < n; ++i)
            {
                if ((n % i) == 0)
                {
                    t += i;
                    sb2.Append($" + {i}");
                }
            }

            if (t == n) sb.Append($"{n} = 1").Append(sb2).AppendLine();
            else sb.Append($"{n} is NOT perfect.").AppendLine();

            sb2.Clear();
        }

        sw.Write(sb.ToString());
        sw.Close();
    }
}