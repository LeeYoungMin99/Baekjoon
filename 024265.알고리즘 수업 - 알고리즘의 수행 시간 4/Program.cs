using System.IO;
using System;
using System.Text;

var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
var sw = new StreamWriter(Console.OpenStandardOutput());

var n = long.Parse(sr.ReadLine()!);

sw.WriteLine((n - 1) * n / 2);
sw.WriteLine(2);
sw.Close();
