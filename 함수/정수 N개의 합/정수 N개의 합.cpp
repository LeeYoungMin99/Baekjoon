#include <vector>

using namespace std;

long long sum(vector<int>& a)
{
	long long ans = 0;

	size_t size = a.size();
	for (size_t i = 0; i < size; ++i)
	{
		ans += a[i];
	}

	return ans;
}