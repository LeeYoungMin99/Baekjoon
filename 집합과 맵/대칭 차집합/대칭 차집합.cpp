#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

int a, b;
unordered_set<int> usA;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> a >> b;

	int value;
	for (int i = 0; i < a; ++i)
	{
		cin >> value;

		usA.insert(value);
	}

	int count = 0;
	for (int i = 0; i < b; ++i)
	{
		cin >> value;

		if (1 == usA.count(value)) usA.erase(value);
		else ++count;
	}

	cout << count + usA.size() << ' ';
}