#include <iostream>

using namespace std;

int n;
bool isVisited[101][101] = { false };

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	int result = 0;
	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;

		for (int j = x, jCount = x + 10; j < jCount; ++j)
		{
			for (int k = y, kCount = y + 10; k < kCount; ++k)
			{
				if (isVisited[j][k] == true)
					continue;

				isVisited[j][k] = true;
				result += 1;
			}
		}
	}

	cout << result;
}
