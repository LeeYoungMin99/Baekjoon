#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

//https://programmers.co.kr/learn/courses/30/lessons/42891#;

struct pairCompare
{
	bool operator()(pair<int, int> l, pair<int, int> r)
	{
		return l.first > r.first;
	}
};

struct intCompare
{
	bool operator()(int l, int r)
	{
		return l > r;
	}
};

int solution(vector<int> food_times, long long k)
{
	int answer = 1;

	size_t n = food_times.size();
	if (k < n) return k + 1;

	priority_queue<pair<int, int>, vector<pair<int, int>>, pairCompare> pq;

	long long sum = 0;
	for (size_t i = 0; i < n; ++i)
	{
		sum += food_times[i];

		pq.push(make_pair(food_times[i], i));
	}

	if (k >= sum) return -1;

	int count = 0;
	int prevTop = 0;
	while (true)
	{
		int curTop = pq.top().first;
		int curCount = curTop - prevTop;
		long long time = pq.size() * curCount;
		if (k < time) break;

		k -= time;
		count += curCount;

		while (curTop == pq.top().first)
		{
			pq.pop();
		}

		prevTop = curTop;
	}

	priority_queue<int, vector<int>, intCompare> indexes;

	while (false == pq.empty())
	{
		indexes.push(pq.top().second);
		pq.pop();
	}

	count = k % indexes.size();

	for (int i = 0; i < count; ++i)
	{
		indexes.pop();
	}

	answer = indexes.top();

	return answer + 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	vector<int> a;
}


int solution2(vector<int> food_times, long long k)
{
	int answer = 1;

	size_t n = food_times.size();
	if (k < n) return k + 1;

	long long sum = food_times[0];
	int minTime = food_times[0];
	for (size_t i = 1; i < n; ++i)
	{
		sum += food_times[i];

		if (minTime <= food_times[i]) continue;

		minTime = food_times[i];
	}

	if (k >= sum) return -1;

	int count = 0;
	while (0 <= k)
	{
		for (size_t i = 0; i < n; ++i)
		{
			if (count >= food_times[i]) continue;

			--food_times[i];
			--k;
			answer = i;

			if (k == -1) break;
		}
	}

	return answer + 1;
}
