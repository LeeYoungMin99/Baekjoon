#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int max = -1, x, y;

	for (int i = 1; i < 10; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			int a;
			cin >> a;
			if (max >= a)
				continue;

			max = a;
			x = i;
			y = j;
		}
	}

	cout << max << '\n' << x << ' ' << y;
}
