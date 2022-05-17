#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times)
{
	long long answer = 0;

	size_t size = times.size();

	sort(times.begin(), times.end());

	long long min = 1;
	long long max = (long long)times[0] * (long long)n;
	long long mid = (min + max) / 2;

	while (min < max)
	{
		long long count = 0;

		for (size_t i = 0; i < size; ++i)
		{
			count += mid / (long long)times[i];
		}

		if (n > count)  min = mid + 1;
		else		    max = mid;

		mid = (min + max) / 2;
	}

	answer = mid;

	return answer;
}

struct compare
{
	bool operator()(pair<long long, size_t> l, pair<long long, size_t> r)
	{
		return l.first > r.first;
	}
};

long long solution2(int n, vector<int> times)
{
	long long answer = 0;

	size_t size = times.size();

	sort(times.begin(), times.end());

	if (n <= size)
	{
		answer = times[n - 1];

		return answer;
	}

	vector<long long> llvec;
	llvec.reserve(n);

	priority_queue<pair<long long, size_t>, vector<pair<long long, size_t>>, compare> pq;

	for (size_t i = 0; i < size; ++i)
	{
		pq.push(make_pair(times[i], i));
	}

	pair<long long, size_t> top;
	size = 0;
	while (n >= size)
	{
		top = pq.top();
		pq.pop();

		llvec.push_back(top.first);
		++size;

		top.first += times[top.second];

		pq.push(top);
	}

	answer = llvec[n - 1];

	return answer;
}