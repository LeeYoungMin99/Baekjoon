#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations)
{
	sort(citations.begin(), citations.end());

	size_t size = citations.size();
	size_t value = citations[size - 1];

	vector<int>::iterator begin = citations.begin();
	vector<int>::iterator end = citations.end();
	for (size_t i = 0; i <= value; ++i)
	{
		size_t count = size - (upper_bound(begin, end, i) - begin);

		if (count > i) continue;

		return i;
	}
}