#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int n, m;
unordered_map<string, bool> us;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n >> m;

	string str;
	size_t length;
	for (int i = 0; i < n; ++i)
	{
		cin >> str;

		us[str] = true;
	}

	int count = 0;
	for (int i = 0; i < m; ++i)
	{
		cin >> str;

		if (us[str])
		{
			++count;
		}
	}

	cout << count;
}