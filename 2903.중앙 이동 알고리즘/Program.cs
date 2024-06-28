using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());

        var s = sr.ReadLine()!;

        var n = int.Parse(s);
        var de = 2;
        for (int i = 0; i < n; ++i)
            de = (de * 2) - 1;

        sw.Write(de * de);
        sw.Close();
    }
}