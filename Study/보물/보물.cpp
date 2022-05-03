#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arrA[51];
int arrB[51];

int S(int* a, const int* b)
{
	int result = 0;

	int c[51];
	for (int i = 0; i < n; ++i)
	{
		c[i] = -1;
	}

	sort(a, a + n);

	for (int i = 0; i < n; ++i)
	{
		int maxIndex = 0;

		for (int j = 0; j < n; ++j)
		{
			int max = 0;

			if (max > b[j] || -1 != c[j]) continue;

			max = b[j];
			maxIndex = j;
		}

		c[maxIndex] = arrA[i];
	}

	for (int i = 0; i < n; ++i)
	{
		result += c[i] * b[i];
	}

	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> arrA[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin >> arrB[i];
	}

	cout << S(arrA, arrB);
}