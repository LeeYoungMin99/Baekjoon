#include <iostream>

using namespace std;

int c, n;
int arr[1000];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> c;

	cout.setf(ios::fixed);
	cout.precision(3);

	for (int i = 0; i < c; ++i)
	{
		cin >> n;

		float count = 0.0f;
		float sum = 0.0f;

		for (int j = 0; j < n; ++j)
		{
			cin >> arr[j];

			sum += arr[j];
		}

		float average = sum / n;

		for (int j = 0; j < n; ++j)
		{
			if (average < arr[j]) ++count;
		}

		cout << count / n * 100.0f << "%\n";
	}
}