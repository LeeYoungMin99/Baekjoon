#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int average = 0;
	for (int i = 0; i < 5; ++i)
	{
		int x;
		cin >> x;

		vec.push_back(x);
		average += x;
	}

	sort(vec.begin(), vec.end());
	size_t size = vec.size();
	cout << average / size << '\n' << vec[size / 2];
}