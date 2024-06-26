#include <iostream>

using namespace std;

long a, b, c;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> a >> b >> c;
	cout << a + b + c;
}