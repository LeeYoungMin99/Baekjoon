#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	int count = 1;
	int value = 666;
	while (count < n)
	{
		++value;

		string str = to_string(value);
		if (str.find("666") != std::string::npos)
			++count;
	}

	cout << value;
}