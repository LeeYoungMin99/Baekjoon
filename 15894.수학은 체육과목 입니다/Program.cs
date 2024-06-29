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

        var n = long.Parse(sr.ReadLine()!);

        sw.Write((n * 3) + n);
        sw.Close();
    }
}