#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int n, m;
unordered_map<string, string> poketmons;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n >> m;

	string name;
	for (int i = 1; i <= n; ++i)
	{
		cin >> name;

		string numberToString = to_string(i);

		poketmons[name] = numberToString;
		poketmons[numberToString] = name;
	}

	string quiz;
	for (int i = 0; i < m; ++i)
	{
		cin >> quiz;

		cout << poketmons[quiz] << '\n';
	}
}