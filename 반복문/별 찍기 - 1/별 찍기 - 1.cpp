#include <iostream>

using namespace std;

int n;
int a, b;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			cout << "*";
		}

		cout << "\n";
	}
}