#include <iostream>

using namespace std;

int m, n;
bool resultArr[1000001] = {};

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> m >> n;

	if (1 == m) ++m;

	for (int i = 2; i <= n; ++i)
	{
		if (true == resultArr[i]) continue;

		for (int j = 2 * i; j <= n; j += i)
		{
			resultArr[j] = true;
		}
	}

	for (int i = m; i <= n; ++i)
	{
		if (false == resultArr[i]) cout << i << '\n';
	}
}
