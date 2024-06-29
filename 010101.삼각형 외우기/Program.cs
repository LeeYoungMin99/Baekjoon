using System.IO;
using System;
using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());

        var n1 = int.Parse(sr.ReadLine()!);
        var n2 = int.Parse(sr.ReadLine()!);
        var n3 = int.Parse(sr.ReadLine()!);

        var t = n1 + n2 + n3;
        if (t == 180)
        {
            if (n1 == 60 && n2 == 60 && n3 == 60)
            {
                sw.Write("Equilateral");
            }
            else if (n1 == n2 || n1 == n3 || n2 == n3)
            {
                sw.Write("Isosceles");
            }
            else
            {
                sw.Write("Scalene");
            }
        }
        else
        {
            sw.Write("Error");
        }

        sw.Close();
    }
}