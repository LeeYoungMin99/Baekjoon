#include <iostream>
#include <algorithm>

using namespace std;

//다솜이는 0과 1로만 이루어진 문자열 S를 가지고 있습니다.
//다솜이는 이 문자열 S에 있는 모든 숫자를 전부 같게 만들려고 합니다.
//다솜이가 할 수 있는 행동은 S에서 연속된 하나 이상의 숫자를 잡고 모두 뒤집는 것입니다.
//뒤집는 것은 1을 0으로, 0을 1로 바꾸는 것을 의미합니다.
//예를 들어 S = 0001100일 때는 다음과 같습니다.
//1. 전체를 뒤집으면 1110011 이 됩니다.
//2. 4번째 문자부터 5번째 문자까지 뒤집으면 1111111이 되어서 두 번 만에 모두 같은 숫자로 만들 수 있습니다.
//하지만, 처음부터 4번째 문자부터 5번째 문자까지 문자를 뒤집으면 한 번에 0000000이 되어서 1번 만에 모두 같은 숫자로 만들 수 있습니다.
//문자열 S가 주어졌을 때.다솜이가 해야 하는 행동의 최소 횟수를 출력하세요.

string s;
int result;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> s;

	size_t size = s.size() - 1;
	int count0 = 0;
	int count1 = 0;

	if (s[0] == '0') ++count1;
	else			 ++count0;

	for (size_t i = 0; i < size; ++i)
	{
		if (s[i] != s[i + 1] && s[i] == '0')
		{
			++count0;
		}
		else
		{
			++count1;
		}
	}

	result = (count0 < count1) ? count0 : count1;

	cout << result;
}