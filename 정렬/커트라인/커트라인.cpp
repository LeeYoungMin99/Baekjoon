#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;
vector<int> vec;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;

		vec.push_back(x);
	}

	sort(vec.begin(), vec.end());
	cout << vec[n - k];
}