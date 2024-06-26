using System.Text;

class Program
{
    static void Main(string[] args)
    {
        string[] s = Console.ReadLine().Split();

        var n = int.Parse(s[0]);
        var m = int.Parse(s[1]);

        int[] ar = new int[101];
        for (int i = 1; i <= n; ++i)
            ar[i] = i;

        for (int i = 0; i < m; ++i)
        {
            s = Console.ReadLine().Split();

            var a = int.Parse(s[0]);
            var b = int.Parse(s[1]);

            for (; a < b; ++a, --b)
            {
                (ar[a], ar[b]) = (ar[b], ar[a]);
            }
        }

        for (int i = 1; i <= n; ++i)
        {
            Console.Write(ar[i]);
            Console.Write(' ');
        }
    }
}