#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
bool cards[20000001];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	int number;
	for (int i = 0; i < n; ++i)
	{
		cin >> number;

		cards[number + 10000000] = true;
	}

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> number;

		if (true == cards[number + 10000000]) cout << "1 ";
		else								  cout << "0 ";
	}
}