#include <iostream>

using namespace std;

int a, b, c;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	while (true)
	{
		cin >> a >> b >> c;

		if (0 == a == b == c) return 0;

		int x = 0;
		int y = 0;
		int h = 0;

		if (a > b)
		{
			x = b;

			if (a > c)
			{
				y = c;

				h = a;
			}
			else
			{
				y = a;

				h = c;
			}
		}
		else
		{
			x = a;

			if (b > c)
			{
				y = c;

				h = b;
			}
			else
			{
				y = b;

				h = c;
			}
		}

		if (h * h == x * x + y * y) cout << "right\n";
		else						cout << "wrong\n";
	}
}
