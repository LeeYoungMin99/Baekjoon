using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());
        var sb = new StringBuilder();

        var sl = new List<string>();
        var max = 0;

        while (true)
        {
            var s = sr.ReadLine();

            if (string.IsNullOrEmpty(s))
                break;

            sl.Add(s);
            max = max < s.Length ? s.Length : max;
        }

        for (int i = 0; i < max; ++i)
        {
            for (int j = 0, count = sl.Count; j < count; ++j)
            {
                if (i < sl[j].Length)
                    sb.Append(sl[j][i]);
            }
        }

        sw.Write(sb.ToString());
        sw.Close();
    }
}