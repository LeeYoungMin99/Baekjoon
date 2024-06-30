using System.IO;
using System;
using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());

        var h = new HashSet<string>();
        var n = int.Parse(sr.ReadLine()!);
        for (int i = 0; i < n; ++i)
        {
            var sa = sr.ReadLine()!.Split();

            if (sa[1].Equals("enter")) h.Add(sa[0]);
            else h.Remove(sa[0]);
        }

        var l = h.ToList();
        l.Sort();

        for (int i = 1, count = l.Count; i <= count; ++i)
            sw.WriteLine(l[^i]);
        sw.Close();
    }
}
