#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int t;
int recursionCount;

int recursion(const char* s, int l, int r) {

	++recursionCount;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
	return recursion(s, 0, strlen(s) - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> t;

	while (--t >= 0)
	{
		string s;
		cin >> s;

		recursionCount = 0;

		cout << isPalindrome(s.c_str()) << ' ' << recursionCount << '\n';
	}
}