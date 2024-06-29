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

        while (true)
        {
            var sa = sr.ReadLine()!.Split();

            var l = new List<int>() { int.Parse(sa[0]), int.Parse(sa[1]), int.Parse(sa[2]) };
            l.Sort();

            var a = l[0];
            var b = l[1];
            var c = l[2];

            if (a == 0 && b == 0 && c == 0)
                break;

            if (c < a + b)
            {
                if (a == b && b == c) sb.AppendLine("Equilateral");
                else if (a == b || a == c || b == c) sb.AppendLine("Isosceles");
                else sb.AppendLine("Scalene");
            }
            else sb.AppendLine("Invalid");
        }

        sw.Write(sb.ToString());
        sw.Close();
    }
}