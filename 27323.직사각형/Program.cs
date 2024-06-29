using System.IO;
using System;
using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());

        var a = int.Parse(sr.ReadLine()!);
        var b = int.Parse(sr.ReadLine()!);

        sw.Write(a * b);
        sw.Close();
    }
}