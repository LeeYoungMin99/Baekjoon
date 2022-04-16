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

	for (int i = n; i > 0; --i)
	{
		for (int j = 1; j <= n; ++j)
		{
			(j >= i) ? cout << "*" : cout << " ";
		}

		cout << "\n";
	}
}