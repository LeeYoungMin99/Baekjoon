#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//https://programmers.co.kr/learn/courses/30/lessons/42862

bool isLost[31];
bool isReserve[31];

int solution(int n, vector<int> lost, vector<int> reserve)
{
	int answer = n;

	size_t lostSize = lost.size();
	size_t reserveSize = reserve.size();

	for (size_t i = 0; i < lostSize; ++i)
	{
		isLost[lost[i]] = true;
	}

	for (size_t i = 0; i < reserveSize; ++i)
	{
		isReserve[reserve[i]] = true;

		if (false == isLost[reserve[i]]) continue;

		isLost[reserve[i]] = false;
		isReserve[reserve[i]] = false;
	}

	for (int i = 1; i < 31; ++i)
	{
		if (false == isLost[i]) continue;

		if (true == isReserve[i - 1] )
		{
			isLost[i] = false;
			isReserve[i - 1] = false;
		}
		else if (true == isReserve[i + 1])
		{
			isLost[i] = false;
			isReserve[i + 1] = false;
		}
		else
		{
			--answer;
		}
	}

	return answer;
}