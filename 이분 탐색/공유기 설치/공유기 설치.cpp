#include <iostream>
#include <algorithm>

using namespace std;

int N, C;
int Max;
int Min = 1000000000;
int Pos[200000];

int compare(const void* a, const void* b)
{
	const int* x = (int*)a;
	const int* y = (int*)b;

	if (*x > *y)
		return 1;
	else if (*y > *x)
		return -1;

	return 0;
}


int main()
{
	ios_base::sync_with_stdio(NULL);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N >> C;

	for (int i = 0; i < N; ++i)
	{
		cin >> Pos[i];

		if (Pos[i] > Max)
			Max = Pos[i];
	}

	qsort(Pos, N, sizeof(int), compare);

	for (int i = 0; i < N - 1; ++i)
	{
		if (Pos[i + 1] - Pos[i] < Min)
			Min = Pos[i + 1] - Pos[i];
	}

	int s = 0;
	int e = Pos[N - 1] - Pos[0];

	int m = (e + s) / 2;
	int Result = 0;

	while (s <= e)
	{
		m = (e + s) / 2;
		int House = Pos[0];
		int Count = 1;

		for (int i = 1; i < N; ++i)
		{
			if (Pos[i] - House >= m)
			{
				++Count;
				House = Pos[i];
			}
		}

		if (Count >= C)
		{
			if (Result < m)
				Result = m;

			s = m + 1;
		}
		else
			e = m - 1;

	}

	cout << Result;
}
