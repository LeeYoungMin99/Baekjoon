#include <iostream>

using namespace std;

int a, b, v;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> a >> b >> v;

	int x = v - a;
	int y = a - b;
	int z = x / y + 1;

	if (0 != x % y) ++z;

	cout << z;
}
