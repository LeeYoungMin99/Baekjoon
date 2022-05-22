#include <iostream>

using namespace std;

int n;
bool resultArr[246913] = {};

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int x = 123456 * 2;
	for (int i = 2; i < x; ++i)
	{
		if (true == resultArr[i]) continue;

		for (int j = 2 * i; j <= x; j += i)
		{
			resultArr[j] = true;
		}
	}

	while (true)
	{
		cin >> n;

		if (n == 0) break;

		int count = 0;

		int y = n * 2;
		int z = n + 1;

		do
		{
			if (false == resultArr[z++]) ++count;

		} while (z < y);

		cout << count << '\n';
	}
}
