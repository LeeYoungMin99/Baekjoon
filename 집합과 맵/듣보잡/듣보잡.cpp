#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int n, m;
unordered_map<string, string> um;
vector<string> notHearAndLook;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n >> m;

	string notHear;
	for (int i = 0; i < n; ++i)
	{
		cin >> notHear;

		um[notHear] = notHear;
	}

	string notLook;
	for (int i = 0; i < m; ++i)
	{
		cin >> notLook;

		if (notLook != um[notLook]) continue;

		notHearAndLook.push_back(um[notLook]);
	}

	sort(notHearAndLook.begin(), notHearAndLook.end());

	size_t size = notHearAndLook.size();
	cout << size << '\n';

	for (size_t i = 0; i < size; ++i)
	{
		cout << notHearAndLook[i] << '\n';
	}
}