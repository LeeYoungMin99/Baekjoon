#include <iostream>

using namespace std;

int n;
int x;
int a;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n >> x;

	for (int i = 0; i < n; ++i)
	{
		cin >> a;

		if (a < x) cout << a << " ";
	}
}