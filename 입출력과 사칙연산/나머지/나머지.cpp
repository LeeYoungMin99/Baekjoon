﻿#include <iostream>

using namespace std;

int a, b, c;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> a >> b >> c;

	cout << (a + b) % c << "\n";
	cout << ((a % c) + (b % c)) % c << "\n";
	cout << (a * b) % c << "\n";
	cout << ((a % c) * (b % c)) % c;
}