using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());
        var sb = new StringBuilder();

        var sa = sr.ReadLine()!.Split();

        var d = new Dictionary<int, char>();
        for (char i = '0', a = '0', z = '9'; i <= z; ++i)
            d.Add(i - a, i);

        for (char i = 'A', a = 'A', z = 'Z'; i <= z; ++i)
            d.Add(i - a + 10, i);

        var n = int.Parse(sa[0]);
        var b = int.Parse(sa[1]);

        while (0 < n)
        {
            var v = n % b;

            d.TryGetValue(v, out var c);
            sb.Insert(0, c);

            n /= b;
        }

        sw.Write(sb.ToString());
        sw.Close();
    }
}