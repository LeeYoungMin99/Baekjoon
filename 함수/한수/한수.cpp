#include <iostream>

using namespace std;

int n;

int HanSu(int value)
{
	if (value < 100) return value;

	int result = 99;

	for (int i = 110; i <= value; ++i)
	{
		int x = i / 100;
		int y = i / 10 % 10;
		int z = i % 10;

		if (x - y != y - z) continue;

		++result;
	}

	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n;

	cout << HanSu(n);
}
