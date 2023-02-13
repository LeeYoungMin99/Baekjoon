#include <iostream>

using namespace std;

int values[201] = { 0 };

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;

		++values[x + 100];
	}

	int v;
	cin >> v;

	int result = values[v + 100];

	cout << result;
}