#include <iostream>

using namespace std;

int arr[10];
int resultArr[42];
int result = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	for (int i = 0; i < 10; ++i)
	{
		cin >> arr[i];

		int index = arr[i] %= 42;

		resultArr[index] = 1;
	}

	for (int i = 0; i < 10; ++i)
	{
		result += resultArr[arr[i]];

		resultArr[arr[i]] = 0;
	}

	cout << result;
}