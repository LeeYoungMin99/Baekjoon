#include <iostream>

using namespace std;

int n;
int x = 1;
int Count = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n;

	while (0 < n)
	{
		++Count;

		n -= x;

		x = 6 * Count;
	}

	cout << Count;
}
