#include <iostream>

using namespace std;

string name;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> name;

	cout << name << "??!";
}