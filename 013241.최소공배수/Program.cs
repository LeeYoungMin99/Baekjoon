using System.IO;
using System;
using System.Text;

var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
var sw = new StreamWriter(Console.OpenStandardOutput());

var sa = sr.ReadLine()!.Split();
var a = long.Parse(sa[0]);
var b = long.Parse(sa[1]);

var c = a;
var d = b;
while (true)
{
    if (d == 0) break;
    if (c < d) (c, d) = (d, c);
    (c, d) = (d, c % d);
}
sw.WriteLine(a / c * b);

sw.Close();