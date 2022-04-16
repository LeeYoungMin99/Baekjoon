#include <iostream>

using namespace std;

double a, b;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> a >> b;

	cout.precision(13);

	cout << a / b;
}