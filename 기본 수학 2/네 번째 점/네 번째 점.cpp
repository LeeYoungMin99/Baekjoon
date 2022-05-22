#include <iostream>

using namespace std;

int arrX[3];
int arrY[3];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int resultX = 0;
	int resultY = 0;

	for (int i = 0; i < 3; ++i)
	{
		cin >> arrX[i] >> arrY[i];
	}

	if		(arrX[0] == arrX[1]) resultX = arrX[2];
	else if (arrX[0] == arrX[2]) resultX = arrX[1];
	else						 resultX = arrX[0];

	if		(arrY[0] == arrY[1]) resultY = arrY[2];
	else if (arrY[0] == arrY[2]) resultY = arrY[1];
	else						 resultY = arrY[0];

	cout << resultX << " " << resultY;
}
