#include <iostream>

using namespace std;

int x;
int Count = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> x;

	while (Count < x)
	{
		x -= Count++;
	}

	int a = x;
	int b = Count - x + 1;

	if (0 == Count % 2)	cout << a << "/" << b;
	else				cout << b << "/" << a;
}
