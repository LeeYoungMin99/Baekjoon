#include <iostream>
#include <algorithm>

using namespace std;

int n;
int x, y;
int Min;
int Sum;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	y = x = n;

	while (0 < y)
	{
		x -= 9;
		y /= 10;
	}

	while (true)
	{
		Sum = y = x;

		while (0 < y)
		{
			Sum += y % 10;
			y /= 10;
		}

		if (Sum == n)
		{
			Min = x;

			break;
		}

		if (n == x) break;

		++x;
	}

	cout << Min;
}