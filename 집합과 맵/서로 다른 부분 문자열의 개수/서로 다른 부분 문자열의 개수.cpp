#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

string s;
unordered_set<string> us;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> s;

	size_t length = s.length();
	for (size_t i = 0; i < length; ++i)
	{
		for (size_t j = 0; j < length - i; ++j)
		{
			string key = "";

			key.reserve(i + 1);

			for (size_t k = j; k <= j + i; ++k)
			{
				key += s[k];
			}

			us.insert(key);
		}
	}

	cout << us.size();
}