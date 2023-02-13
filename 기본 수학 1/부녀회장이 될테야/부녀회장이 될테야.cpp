#include <iostream>

using namespace std;

int t;
int k, n;
int result = 1;

int arr[16][16] = { 0 };

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	for (int i = 1; i < 15; ++i)
		arr[0][i] = i;

	for (int x = 1, i = 0; x < 15; ++x, ++i)
	{
		for (int y = 1, j = 0; y < 15; ++y, ++j)
		{
			arr[x][y] = arr[x][j] + arr[i][y];
		}
	}

	cin >> t;
	
	for (int i = 0; i < t; ++i)
	{
		cin >> k;
		cin >> n;
	
		cout << arr[k][n] << endl;
	}

}
