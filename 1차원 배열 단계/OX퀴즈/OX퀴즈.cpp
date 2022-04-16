#include <iostream>

using namespace std;

int n;
string str;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> str;

		int score = 0;
		int result = 0;

		int length = str.length();
		for (int j = 0; j < length; ++j)
		{
			score += (str[j] == 'O') ? 1 : -score;

			result += score;
		}

		cout << result << "\n";
	}
}