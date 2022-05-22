#include <iostream>
#include <cstring>

using namespace std;

char a[10001], b[10001];
int aValue[10001] = {};
int bValue[10001] = {};
int resultArr[10001] = {};

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> a >> b;

	int aLength = strlen(a);
	int bLength = strlen(b);
	int maxLength = (aLength > bLength) ? aLength : bLength;

	int x = maxLength - aLength;
	for (int i = 0 + x; i < aLength + x; ++i)
	{
		aValue[i + 1] = a[i - x] - 48;
	}

	int y = maxLength - bLength;
	for (int i = 0 + y; i < bLength + y; ++i)
	{
		bValue[i + 1] = b[i - y] - 48;
	}

	for (int i = maxLength; 0 <= i; --i)
	{
		int z = aValue[i] + bValue[i];
		int a = z / 10;
		int b = z % 10;
		int c = resultArr[i] + b;

		resultArr[i] = c % 10;
		resultArr[i - 1] += a + c / 10;
	}

	if (0 != resultArr[0]) cout << resultArr[0];

	for (int i = 1; i <= maxLength; ++i)
	{
		cout << resultArr[i];
	}
}