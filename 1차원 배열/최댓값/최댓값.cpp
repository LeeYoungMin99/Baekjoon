#include <iostream>

using namespace std;

int arr[9];
int Max, Order;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	for (int i = 0; i < 9; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 9; ++i)
	{
		if (Max > arr[i]) continue;

		Max = arr[i];
		Order = i + 1;
	}

	cout << Max << "\n" << Order;
}