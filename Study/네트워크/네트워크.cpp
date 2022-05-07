#include <vector>

using namespace std;

vector<vector<int>> computersVec;
bool isVisited[200];

void DFS(size_t from, size_t to)
{
	for (size_t i = 0; i < to; ++i)
	{
		if (0 == computersVec[from][i]) continue;

		if (1 == isVisited[i]) continue;

		isVisited[i] = true;

		DFS(i, to);
	}
}

int solution(int n, vector<vector<int>> computers)
{
	int answer = 0;

	computersVec = computers;

	size_t count = computersVec.size();
	for (size_t i = 0; i < count; ++i)
	{
		if (true == isVisited[i]) continue;

		isVisited[i] = true;

		++answer;

		DFS(i, count);
	}

	return answer;
}