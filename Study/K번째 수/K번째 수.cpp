#include <string>
#include <vector>
#include <queue>

using namespace std;

struct compare
{
	bool operator()(int l, int r)
	{
		return l > r;
	}
};

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
	vector<int> answer;

	priority_queue<int, vector<int>, compare> pq;

	for (size_t i = 0; i < commands.size(); ++i)
	{
		for (int j = commands[i][0] - 1; j < commands[i][1]; ++j)
		{
			pq.push(array[j]);
		}

		for (int j = 0; j < commands[i][2] - 1; ++j)
		{
			pq.pop();
		}

		answer.push_back(pq.top());

		while (false == pq.empty())
		{
			pq.pop();
		}
	}

	return answer;
}