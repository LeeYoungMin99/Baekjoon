﻿#include <iostream>

using namespace std;

int t;
int a, b;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> a >> b;

		cout << a + b << "\n";
	}
}