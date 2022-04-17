#include <iostream>

using namespace std;

int x, y, w, h;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> x >> y >> w >> h;

	int width  = (w - x < x) ? w - x : x;
	int height = (h - y < y) ? h - y : y;

	int distance = (width < height) ? width : height;

	cout << distance;
}
