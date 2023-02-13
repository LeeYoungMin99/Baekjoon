#include <iostream>

using namespace std;

int n, m;

int arr[101][101] = { 0 };

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			int x;
			cin >> x;
			cout << arr[i][j] + x << ' ';
		}

		cout << endl;
	}
}
