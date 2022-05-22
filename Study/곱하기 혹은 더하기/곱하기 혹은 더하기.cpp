#include <iostream>
#include <algorithm>

using namespace std;

// 각 자리가 숫자(0부터 9)로만 이루어진 문자열 드가 주어졌을 때, 
// 왼쪽부터 오른쪽으로 하나씩 모든숫자를 확인하며 숫자 사이에 ‘ x’ 혹은 ‘ + ’ 연산자를 넣어 
// 결과적으로 만들어질 수 있는 가장 큰 수를 구하는 프로그램을 작성하세요.
// 단, +보다 스를 먼저 계산하는 일반적인 방식과는 달리, 모든 연산은 왼쪽에서부터 순서대로 이루어진다고 가정합니다.
// 예를 들어 02984라는 문자열이 주어지면. 만들어질 수 있는 가장 큰 수는((((0 + 2)x 9)乂 8)乂 4) = 576입니다.
// 또한 만들어질 수 있는 가장 큰 수는 항상 20억 이하의 정수가 되도록 입력이	주어집니다.

string s;
int result;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> s;

	size_t size = s.size();

	if (1 == size)
	{
		result = s[0] - '0';
	}
	else
	{
		int sum = (s[0] - '0') + (s[1] - '0');
		int mul = (s[0] - '0') * (s[1] - '0');

		result = (sum > mul) ? sum : mul;

		for (size_t i = 1; i < size - 1; ++i)
		{
			if (s[i + 1] > '1')
			{
				result *= s[i + 1] - '0';
			}
			else
			{
				result += s[i + 1] - '0';
			}
		}
	}

	cout << result;
}