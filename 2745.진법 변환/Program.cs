using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());

        var sa = sr.ReadLine()!.Split();

        var d = new Dictionary<char, int>();
        for (char i = '0', a = '0', z = '9'; i <= z; ++i)
            d.Add(i, i - a);

        for (char i = 'A', a = 'A', z = 'Z'; i <= z; ++i)
            d.Add(i, i - a + 10);

        var r = 0;
        var n = sa[0];
        var b = int.Parse(sa[1]);

        for (int i = n.Length - 1; 0 <= i; --i)
        {
            var x = 1;
            for (int j = 1, jCount = n.Length - i; j < jCount; ++j)
                x *= b;

            d.TryGetValue(n[i], out var v);
            r += x * v;
        }

        sw.Write(r);
        sw.Close();
    }
}