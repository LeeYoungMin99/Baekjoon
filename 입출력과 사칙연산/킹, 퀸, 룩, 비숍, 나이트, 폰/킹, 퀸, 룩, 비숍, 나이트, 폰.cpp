#include <iostream>

using namespace std;

int counts[6] = { 1,1,2,2,2,8 };
int inputCounts[6] = { 0,0,0,0,0,0 };

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	for (int i = 0; i < 6; ++i)
		cin >> inputCounts[i];

	for (int i = 0; i < 6; ++i)
		cout << counts[i] - inputCounts[i] << ' ';
}