#include <iostream>

using namespace std;

int m, n;
int result = 0;
int Min = 10000;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> m;
	cin >> n;

	if (1 == m) ++m;

	for (int i = m; i <= n; ++i)
	{
		int a = 2;
		bool isPrime = true;

		while (a * a <= i)
		{
			if (0 == i % a)
			{
				isPrime = false;

				break;
			}

			++a;
		}

		if (true == isPrime)
		{
			result += i;

			if (10000 == Min) Min = i;
		}
	}

	if (10000 == Min) cout << -1;
	else			  cout << result << "\n" << Min;
}
