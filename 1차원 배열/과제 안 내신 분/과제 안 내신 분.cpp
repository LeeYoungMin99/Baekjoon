#include <iostream>

using namespace std;

int values[31] = { 0 };

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	for (int i = 0; i < 28; ++i)
	{
		int x;
		cin >> x;

		values[x] = 1;
	}

	for (int i = 1, iCount = 31; i < iCount; ++i)
	{
		if (values[i] == 0)
			cout << i << endl;
	}
}