#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int n;
int k;
int w, h;
int l;

bool apple[101][101];
bool tail[101][101];
int rotateArr[101];
int timeArr[101];

queue<pair<int, int>> tailQueue;

int moveDirX[4] = { 1,0,-1,0 };
int moveDirY[4] = { 0,1,0,-1 };

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;
	cin >> k;

	for (int i = 0; i < k; ++i)
	{
		int x, y;
		cin >> y >> x;

		apple[y][x] = true;
	}

	cin >> l;

	for (int i = 0; i < l; ++i)
	{
		int time;
		char dir;

		cin >> time >> dir;

		timeArr[i] = time;
		if ('L' == dir) { rotateArr[i] = -1; }
		else { rotateArr[i] = 1; }
	}

	timeArr[l] = 99999;
	rotateArr[l] = 1;

	int elapsedTime = 0;
	int moveDir = 0;

	int headX = 1, headY = 1;
	int tailX, tailY;
	tailQueue.push(make_pair(1, 1));

	int rotateCount = 0;
	int tailSize = 1;

	for (int i = 0; i <= l; ++i)
	{
		int time = timeArr[i];

		for (; elapsedTime < time; ++elapsedTime)
		{
			tail[headY][headX] = true;
			tailQueue.push(make_pair(headY, headX));

			headX += moveDirX[moveDir];
			headY += moveDirY[moveDir];

			if (0 >= headX || n < headX)
			{
				i += l;
				break;
			}
			else if (0 >= headY || n < headY)
			{
				i += l;
				break;
			}

			if (true == apple[headY][headX])
			{
				apple[headY][headX] = false;
				++tailSize;
			}
			else
			{
				tail[tailQueue.front().first][tailQueue.front().second] = false;
				tailQueue.pop();
			}

			if (4 > tailSize) continue;
			if (2 > rotateCount) continue;

			if (true == tail[headY][headX])
			{
				i += l;
				break;
			}
		}

		moveDir += rotateArr[i];
		++rotateCount;
		if (0 > moveDir)  moveDir = 3;
		else if (4 <= moveDir) moveDir = 0;
	}

	cout << elapsedTime + 1;
}
