#include <iostream>

using namespace std;

int n;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n;

	for (int i = n; i > 0; --i)
	{
		cout << i << "\n";
	}
}