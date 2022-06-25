#include <iostream>
#include <algorithm>

using namespace std;

int n;
pair<int, int> coordinates[100001];

struct compare
{
	bool operator()(pair<int, int> l, pair<int, int> r)
	{
		if (l.first != r.first)	return l.first < r.first;
		else					return l.second < r.second;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	int x, y;
	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y;

		coordinates[i] = make_pair(y, x);
	}

	sort(coordinates, coordinates + n);

	for (int i = 0; i < n; ++i)
	{
		cout << coordinates[i].second << " " << coordinates[i].first << '\n';
	}
}