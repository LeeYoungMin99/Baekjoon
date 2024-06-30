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

        var sa = sr.ReadLine()!.Split();

        var a = int.Parse(sa[0]);
        var b = int.Parse(sa[1]);
        var c = int.Parse(sa[2]);
        var d = int.Parse(sa[3]);
        var e = int.Parse(sa[4]);
        var f = int.Parse(sa[5]);

        for (int x = -999, xCount = 1000; x < xCount; ++x)
        {
            for (int y = -999, yCount = 1000; y < yCount; ++y)
            {
                var ax = a * x;
                var by = b * y;
                var dx = d * x;
                var ey = e * y;
                if ((ax + by) == c && (dx + ey) == f)
                {
                    sw.Write($"{x} {y}");
                    break;
                }
            }
        }

        sw.Close();
    }
}