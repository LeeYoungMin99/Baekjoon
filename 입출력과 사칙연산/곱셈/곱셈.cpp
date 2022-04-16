#include <iostream>

using namespace std;

int a, b;
int result;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> a >> b;

	cout << a * (b % 10) << endl;
	cout << a * ((b / 10) % 10) << endl;
	cout << a * (b / 100) << endl;
	cout << a * b << endl;
}