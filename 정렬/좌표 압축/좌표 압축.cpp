#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<long long> coordinates;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	long long coordinate;
	for (int i = 0; i < n; ++i)
	{
		cin >> coordinate;

		coordinates.push_back(coordinate);
	}

	vector<long long> copyCoordinates = coordinates;

	sort(coordinates.begin(), coordinates.end());
	coordinates.erase(unique(coordinates.begin(), coordinates.end()), coordinates.end());

	vector<long long>::iterator begin = coordinates.begin();
	vector<long long>::iterator end = coordinates.end();
	for (int i = 0; i < n; ++i)
	{
		cout << lower_bound(begin, end, copyCoordinates[i]) - begin << ' ';
	}
}