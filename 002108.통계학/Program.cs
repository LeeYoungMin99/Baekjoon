using System.IO;
using System;
using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());

        var n = int.Parse(sr.ReadLine()!);

        var t = 0;
        var l = new List<int>();
        var ml = new List<int>();
        var ar = new int[8001];

        var m = 0;
        for (int i = 0; i < n; ++i)
        {
            var v = int.Parse(sr.ReadLine()!);

            t += v;
            l.Add(v);

            var c = ++ar[v + 4000];
            if (m < c)
            {
                m = c;
                ml.Clear();
            }

            if (m <= c)
                ml.Add(v);
        }

        l.Sort();
        ml.Sort();

        var d = t / (float)n;
        sw.WriteLine((int)(d < 0 ? d - 0.5f : d + 0.5f));

        sw.WriteLine(l[l.Count / 2]);

        if (ml.Count < 2) sw.WriteLine(ml[0]);
        else sw.WriteLine(ml[1]);

        sw.WriteLine(l[^1] - l[0]);
        sw.Close();
    }
}
