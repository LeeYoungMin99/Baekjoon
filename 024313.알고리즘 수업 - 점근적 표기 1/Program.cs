using System.IO;
using System;
using System.Text;

var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
var sw = new StreamWriter(Console.OpenStandardOutput());

var sa = sr.ReadLine()!.Split();

var a1 = int.Parse(sa[0]);
var a0 = int.Parse(sa[1]);

var c = int.Parse(sr.ReadLine()!);
var n = int.Parse(sr.ReadLine()!);

sw.WriteLine(((a1 * n) + a0) <= (c * n) && a1 <= c ? 1 : 0);
sw.Close();