﻿using System.IO;
using System;
using System.Text;

var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
var sw = new StreamWriter(Console.OpenStandardOutput());

var n = int.Parse(sr.ReadLine()!);

sw.WriteLine("1");
sw.WriteLine("0");
sw.Close();
