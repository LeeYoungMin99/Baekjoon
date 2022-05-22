#include <iostream>

using namespace std;

int a, b, c;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> a >> b >> c;

	if (b >= c) cout << -1;
	else
	{
		int result = a / (c - b);

		cout << ++result;
	}
}
