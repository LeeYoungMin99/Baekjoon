#include <iostream>

using namespace std;

int n;
int arr[1000000];
int Min = 1000000, Max = -1000000;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (Min > arr[i]) Min = arr[i];
		if (Max < arr[i]) Max = arr[i];
	}

	cout << Min << " " << Max;
}