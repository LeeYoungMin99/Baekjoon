#include <iostream>

using namespace std;

int x = 0;
int n = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> x;
	cin >> n;

	int value = 0;
	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;

		value += a * b;
	}

	string result = (value == x) ? "Yes" : "No";

	cout << result;
}