#include <iostream>

using namespace std;

int a, b;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> a >> b;

	if		(a > 0 && b > 0) cout << 1;
	else if (a < 0 && b > 0) cout << 2;
	else if (a < 0 && b < 0) cout << 3;
	else					 cout << 4;
}