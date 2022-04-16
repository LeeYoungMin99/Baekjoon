#include <iostream>

using namespace std;

int h, m, t;
int result;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> h >> m;
	cin >> t;

	result = (h * 60) + m + t;

	h = result / 60;
	m = result % 60;

	h = (24 > h) ? h : h - 24;

	cout << h << " " << m;
}