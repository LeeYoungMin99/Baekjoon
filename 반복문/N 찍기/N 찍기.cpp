#include <iostream>

using namespace std;

int n;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cout << i << "\n";
	}
}