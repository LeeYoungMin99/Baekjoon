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

        var l = new List<int>() { int.Parse(sa[0]), int.Parse(sa[1]), int.Parse(sa[2]) };
        l.Sort();

        var a = l[0];
        var b = l[1];
        var c = l[2];

        if (a + b <= c)
        {
            c -= c - (a + b) + 1;
        }

        sw.Write(a + b + c);
        sw.Close();
    }
}