using System.IO;
using System;
using System.Text;

var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
var sw = new StreamWriter(Console.OpenStandardOutput());

var n = long.Parse(sr.ReadLine()!);
sw.WriteLine((n - 2) * (n - 1) * n / 6);
sw.WriteLine(3);
sw.Close();
