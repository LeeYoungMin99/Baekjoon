using System.IO;
using System;
using System.Text;

var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
var sw = new StreamWriter(Console.OpenStandardOutput());

var t = int.Parse(sr.ReadLine()!);

for (int i = 0; i < t; ++i)
{
    var sa = sr.ReadLine()!.Split();
    var a = int.Parse(sa[0]);
    var b = int.Parse(sa[1]);

    for (int j = 1, k = 1; ;)
    {
        var c = a * j;
        var d = b * k;

        if (c == d)
        {
            sw.WriteLine(c);
            break;
        }

        if (c < d) ++j;
        else ++k;
    }
}

sw.Close();