#include <iostream>

using namespace std;

int t;
int h, w, n;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> h >> w >> n;

		int a = n % h;
		int b = n / h;

		if (a == 0) cout << h;
		else
		{
			cout << a;

			++b;
		}

		cout << b / 10 << b % 10 << "\n";
	}
}
