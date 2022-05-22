#include <iostream>

using namespace std;

int a, b, c;
int Count = 0;
int Max;
int Equal;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> a >> b >> c;

	if (a == b || a == c)
	{
		++Count;

		Equal = a;
	}

	if (b == c)
	{
		++Count;

		Equal = b;
	}

	Max = max(a, b);
	Max = max(Max, c);

	if		(2 == Count) cout << 1000 * Equal + 10000;
	else if (1 == Count) cout << 100  * Equal + 1000;
	else				 cout << 100  * Max;
}