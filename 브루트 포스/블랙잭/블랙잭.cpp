#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int card[101];
int Max = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n >> m;

	for (int i = 1; i <= n; ++i)
	{
		cin >> card[i];
	}

	sort(card, card + n);

	for (int i = 1; i <= n - 2; ++i)
	{
		for (int j = 1 + i; j <= n - 1; ++j)
		{
			for (int k = 1 + j; k <= n; ++k)
			{
				int sum = card[i] + card[j] + card[k];
				if (m < sum) break;
				if (Max < sum) Max = sum;
			}
		}
	}

	cout << Max;
}