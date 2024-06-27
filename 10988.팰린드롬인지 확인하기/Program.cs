using System.Text;

class Program
{
    static void Main(string[] args)
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(Console.OpenStandardOutput());

        var ns = sr.ReadLine()!;

        var b = true;
        for (int i = 0, j = ns.Length - 1; i <= j; ++i, --j)
            b = b && ns[i] == ns[j];

        sw.Write(b ? 1 : 0);
        sw.Close();
    }
}