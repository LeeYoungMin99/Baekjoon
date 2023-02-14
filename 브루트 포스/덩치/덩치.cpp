#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

struct Person
{
	int x, y;
	int order, ranking;
};

bool IsBig(Person l, Person r)
{
	if (l.x < r.x && l.y < r.y)
		return true;

	return false;
}

struct OrderComparer
{
	bool operator()(Person l, Person r)
	{
		return l.order < r.order;
	}
};

vector<Person> vec;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		Person person;
		person.order = i;
		cin >> person.x >> person.y;

		vec.push_back(person);
	}

	for (int i = 0; i < n; ++i)
	{
		int ranking = 1;
		for (int j = 0; j < n; ++j)
		{
			if (IsBig(vec[i], vec[j]) == true)
				++ranking;
		}

		vec[i].ranking = ranking;
	}

	for (int i = 0; i < n; ++i)
		cout << vec[i].ranking << ' ';
}