﻿#include <iostream>

using namespace std;

int a;
int result;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> a;

	for (int i = 1; i <= a; ++i)
	{
		result += i;
	}

	cout << result;
}