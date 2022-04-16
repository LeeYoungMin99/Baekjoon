#include <iostream>

using namespace std;

int arr[3];
int resultArr[10];
int x = 1;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	for (int i = 0; i < 3; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 3; ++i)
	{
		x *= arr[i];
	}

	while (0 < x)
	{
		++resultArr[x % 10];

		x /= 10;
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << resultArr[i] << "\n";
	}
}