#include <iostream>

using namespace std;

int t;
int n;
bool resultArr[10001] = {};

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int x = 10000;
	for (int i = 2; i <= x; ++i)
	{
		if (true == resultArr[i]) continue;

		for (int j = 2 * i; j <= x; j += i)
		{
			resultArr[j] = true;
		}
	}

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> n;

		int a = n / 2;
		if (false == resultArr[a]) cout << a << " " << a << '\n';
		else
		{
			bool xIsPrime = false;
			bool yIsPrime = false;

			int x = a;
			int y = a;

			while (true)
			{
				xIsPrime = false;
				yIsPrime = false;

				while (false == xIsPrime || false == yIsPrime)
				{
					xIsPrime = !resultArr[--x];
					yIsPrime = !resultArr[++y];
				}

				if (n == x + y)
				{
					cout << x << " " << y << '\n';

					break;
				}
			}
		}
	}
}
