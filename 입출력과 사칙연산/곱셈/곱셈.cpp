#include <iostream>

using namespace std;

int a, b;
int result;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> a >> b;

	cout << a * (b % 10) << "\n";
	cout << a * ((b / 10) % 10) << "\n";
	cout << a * (b / 100) << "\n";
	cout << a * b << "\n";
}