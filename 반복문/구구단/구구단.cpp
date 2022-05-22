#include <iostream>

using namespace std;

int a;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> a;

	for (int i = 1; i < 10; ++i)
	{
		cout << a << " * " << i << " = " << a * i << "\n";
	}
}