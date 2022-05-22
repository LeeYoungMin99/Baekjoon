#include <iostream>

using namespace std;

int n;
int x;
int Count = 1;

int Calculate(int value)
{
	return (value % 10 * 10) + ((value / 10 + value % 10) % 10);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	if (10 > n) n *= 10;

	x = Calculate(n);

	while (x != n)
	{
		x = Calculate(x);

		++Count;
	}

	cout << Count;
}