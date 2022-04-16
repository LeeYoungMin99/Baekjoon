#include <iostream>

using namespace std;

int n;
float arr[1000];
float Max = 0.0f;
float result;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];

		if (Max < arr[i]) Max = arr[i];
	}

	for (int i = 0; i < n; ++i)
	{
		result += arr[i] / Max * 100.0f;
	}

	cout << result / n;
}