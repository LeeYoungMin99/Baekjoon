#include <iostream>

using namespace std;

int a, b;
int result;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	while (true)
	{
		cin >> a >> b;

		result = a + b;

		if (result == 0) break;

		cout << result << "\n";
	}
}