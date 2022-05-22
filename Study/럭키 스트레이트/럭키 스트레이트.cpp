#include <iostream>
#include <algorithm>

using namespace std;

int n;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	int copyN = n;
	int count = 0;

	while (0 < copyN)
	{
		++count;
		copyN /= 10;
	}

	int half = count / 2;
	int left = 0;
	int right = 0;

	for (int i = 0; i < half; ++i)
	{
		right += n % 10;
		n /= 10;
	}

	for (int i = 0; i < half; ++i)
	{
		left += n % 10;
		n /= 10;
	}

	if (left == right) { cout << "LUCKY"; }
	else			   { cout << "READY"; }
}