#include <iostream>

using namespace std;

int n;
int a;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n;

	if (1 == n) return 0;

	a = 2;

	while (1 < n)
	{
		if (0 == n % a)
		{
			n /= a;

			cout << a << "\n";

			a = 1;
		}

		++a;
	}
}
