#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int n;
int value;
int values[500001];
int valueCounts[8001];
vector<int> maxCounts;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	int count;
	int maxCount = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> values[i];
		value += values[i];
		count = ++valueCounts[values[i] + 4000];

		if (maxCount > count) continue;
		else if (maxCount == count)
		{
			maxCounts.push_back(values[i]);
		}
		else
		{
			maxCount = count;

			maxCounts.clear();
			maxCounts.push_back(values[i]);
		}
	}

	sort(values, values + n);
	sort(maxCounts.begin(), maxCounts.end());

	cout << floor(value / (float)n + 0.5f) << '\n';
	cout << values[n / 2] << '\n';

	if (1 == maxCounts.size())	cout << maxCounts[0] << '\n';
	else						cout << maxCounts[1] << '\n';

	cout << (values[n - 1] + 4000) - (values[0] + 4000);
}