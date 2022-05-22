#include <iostream>

using namespace std;

int a;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> a;

	if		(90 <= a) cout << "A";
	else if (80 <= a) cout << "B";
	else if (70 <= a) cout << "C";
	else if (60 <= a) cout << "D";
	else			  cout << "F";
}