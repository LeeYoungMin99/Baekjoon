using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());

        var d = new Dictionary<string, float>()
        {
            ["A+"] = 4.5f,
            ["A0"] = 4f,
            ["B+"] = 3.5f,
            ["B0"] = 3f,
            ["C+"] = 2.5f,
            ["C0"] = 2f,
            ["D+"] = 1.5f,
            ["D0"] = 1f,
            ["F"] = 0f,
        };

        var tp = 0f;
        var tv = 0f;
        for (int i = 0, count = 20; i < count; ++i)
        {
            var sar = sr.ReadLine()!.Split();

            if (d.TryGetValue(sar[2], out var v))
            {
                var p = float.Parse(sar[1]);
                tp += p;
                tv += p * v;
            }
        }

        var r = tv / tp;

        sw.Write(r);
        sw.Close();
    }
}