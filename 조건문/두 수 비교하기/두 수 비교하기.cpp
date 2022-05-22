#include <iostream>

using namespace std;

int a, b;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> a >> b;

	if (a > b)  cout << ">";
	if (a < b)  cout << "<";
	if (a == b) cout << "==";
}