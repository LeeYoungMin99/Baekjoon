using System.IO;
using System;
using System.Text;

var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
var sw = new StreamWriter(Console.OpenStandardOutput());

var sa1 = sr.ReadLine()!.Split();
var sa2 = sr.ReadLine()!.Split();
var a = long.Parse(sa1[0]);
var b = long.Parse(sa1[1]);
var c = long.Parse(sa2[0]);
var d = long.Parse(sa2[1]);

var e = GCD(b, d);
var f = b / e * d;
var g = a * (f / b) + c * (f / d);
var h = GCD(f, g);

sw.WriteLine($"{g / h} {f / h}");
sw.Close();



static long GCD(long a, long b)
{
    if (a < b) return GCD(b, a);
    if (b == 0) return a;
    return GCD(b, a % b);
}