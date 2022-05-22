#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
int cards[20000001];

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

		++cards[number + 10000000];
	}

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> number;

		cout << cards[number + 10000000] << ' ';
	}
}