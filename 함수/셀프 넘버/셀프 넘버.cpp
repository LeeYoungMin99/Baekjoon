#include <iostream>

using namespace std;

bool resultArr[10001];

int SelfNumber(int value)
{
	int result = value;

	while (0 < value)
	{
		result += value % 10;

		value /= 10;
	}

	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	for (int i = 1; i < 10000; ++i)
	{
		int result = SelfNumber(i);

		if (10000 < result) continue;

		resultArr[result] = true;
	}

	for (int i = 1; i <= 10000; ++i)
	{
		if (false == resultArr[i]) cout << i << "\n";
	}
}
