#include <iostream>

using namespace std;

int n;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	int x = n % 5;
	int y = n / 5;

	if		(0 == x)		   cout << y;
	else if (1 == x || 3 == x) cout << y + 1;
	else if (2 == x)		   
	{						   
		if (2 > y)			   cout << -1;
		else				   cout << y + 2;
	}						   
	else if (4 == x)		   
	{						   
		if (1 > y)			   cout << -1;
		else				   cout << y + 2;
	}
}