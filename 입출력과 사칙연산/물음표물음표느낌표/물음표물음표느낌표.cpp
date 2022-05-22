#include <iostream>

using namespace std;

string name;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> name;

	cout << name << "??!";
}