#include <iostream>

using namespace std;

int n;
int x;
int resultArr[1001];
int Count;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	resultArr[1] = true;
	for (int i = 1; i <= 1000; ++i)
	{
		for (int j = 2; j < i; ++j)
		{
			if (0 == i % j)
			{
				resultArr[i] = true;

				break;
			}
		}
	}

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> x;

		if (false == resultArr[x]) ++Count;
	}

	cout << Count;
}
