#include <iostream>

using namespace std;

int a, b;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> a >> b;

	cout << a + b;
}