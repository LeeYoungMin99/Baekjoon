#include <iostream>
#include <string>
#include <vector>

using namespace std;

int answer = 0;
int targetNum;
vector<int> numbersVec;

void DFS(size_t from, size_t to, int sum)
{
	if (from == to)
	{
		if (sum == targetNum)
		{
			++answer;
		}

		return;
	}

	int number = numbersVec[from];

	++from;

	DFS(from, to, sum + number);
	DFS(from, to, sum - number);
}

int solution(vector<int> numbers, int target)
{
	numbersVec = numbers;
	targetNum = target;

	DFS(0, numbersVec.size(), 0);

	return answer;
}