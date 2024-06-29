using System.IO;
using System;
using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());

        int x1, x2, y1, y2;
        x1 = y1 = 10000;
        x2 = y2 = -10000;

        var n = int.Parse(sr.ReadLine()!);
        for (int i = 0; i < n; ++i)
        {
            var sa = sr.ReadLine()!.Split();

            var x = int.Parse(sa[0]);
            var y = int.Parse(sa[1]);

            x1 = Math.Min(x1, x);
            x2 = Math.Max(x2, x);
            y1 = Math.Min(y1, y);
            y2 = Math.Max(y2, y);
        }

        sw.Write((x2 - x1) * (y2 - y1));
        sw.Close();
    }
}