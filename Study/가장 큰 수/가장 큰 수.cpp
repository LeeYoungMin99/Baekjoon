#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct compare
{
	//bool operator()(int l, int r)
	//{
	//	string strLR = to_string(l) + to_string(r);
	//	string strRL = to_string(r) + to_string(l);
	//	size_t size = strLR.size();
	//
	//	for (size_t i = 0; i < size; ++i)
	//	{
	//		if (strLR[i] != strRL[i])
	//		{
	//			return strLR[i] > strRL[i];
	//		}
	//	}
	//
	//	return l < r;
	//}

	bool operator()(int l, int r)
	{
		int i = 999;
		int countL = 4;
		int countR = 4;

		if (l == 0) return l > r;
		else if (r == 0) return r < l;

		while (i >= l)
		{
			i /= 10;
			--countL;
		}

		i = 999;
		while (i >= r)
		{
			i /= 10;
			--countR;
		}

		int digitL = 1;
		int digitR = 1;
		for (int i = 0; i < countL; ++i)
		{
			digitL *= 10;
		}

		for (int i = 0; i < countR; ++i)
		{
			digitR *= 10;
		}

		int lr = l * digitR + r;
		int rl = r * digitL + l;

		int digit = digitL * digitR / 10;

		while (digit > 0)
		{
			if (lr / digit != rl / digit)
			{
				return lr / digit > rl / digit;
			}

			digit /= 10;
		}

		return false;
	}
};

string solution(vector<int> numbers)
{
	string answer = "";

	sort(numbers.begin(), numbers.end(), compare());

	for (size_t i = 0; i < numbers.size(); ++i)
	{
		answer += to_string(numbers[i]);
	}

	for (size_t i = 0; i < answer.size() - 1;)
	{
		if (answer[0] != '0') break;

		answer.erase(answer.begin());
	}

	return answer;
}