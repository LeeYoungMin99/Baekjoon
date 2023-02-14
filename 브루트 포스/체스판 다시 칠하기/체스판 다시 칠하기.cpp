#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
string arr[51];
string lines[2] = { "WBWBWBWB" ,"BWBWBWBW" };
int dwb[2] = { 0,1 };
int dbw[2] = { 1,0 };

int GetColoringCount(int x, int y)
{
	int WBCount = 0;
	int BWCount = 0;

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			int index = i % 2;
			if (lines[dbw[index]][j] != arr[x + i][y + j]) ++WBCount;
			if (lines[dwb[index]][j] != arr[x + i][y + j]) ++BWCount;
		}
	}

	return min(WBCount, BWCount);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> arr[i];
	}

	int minCount = INT32_MAX;
	for (int i = 0, iCount = n - 8; i <= iCount; ++i)
	{
		for (int j = 0, jCount = m - 8; j <= jCount; ++j)
		{
			int count = GetColoringCount(i, j);
			minCount = min(minCount, count);
		}
	}

	cout << minCount;
}