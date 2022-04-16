#include <iostream>

using namespace std;

int h, m;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> h >> m;

	m -= 45;

	if (0 > m)
	{
		m += 60;

		h = (1 <= h) ? --h : 23;
	}

	cout << h << " " << m;
}