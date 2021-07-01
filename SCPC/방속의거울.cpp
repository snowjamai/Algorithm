#include <iostream>
#include <queue>

using namespace std;

int map[1000][1000];
int visit[1000][1000];
int Answer;

int light_x[] = { 1, 0, -1, 0 };
int light_y[] = { 0, 1, 0, -1 };

int BFS(int x, int y, int N);

int main()
{
	int T, test_case;
	
	int N, mirror, dir;
	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		cin >> N;

		for(int h = 0; h < N; ++h)
			for (int w = 0; w < N; ++w) {
				scanf("%1d", &map[h][w]);
			}
		dir = 0;

		Answer = BFS(0, 0, N);
		for (int h = 0; h < N; ++h)
			for (int w = 0; w < N; ++w)
				visit[h][w] = 0;
		

		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}

int BFS(int x, int y, int N) {
	int cnt = 0;
	queue<pair< int, pair<int, int>>> a;
	if (map[y][x] == 0)
		a.push({ 0, { x, y } });
	else if (map[y][x] == 1) {
		cnt++;
		a.push({ 3, {x, y} });
	}
	else if (map[y][x] == 2) {
		cnt++;
		a.push({ 1,{x,y} });
	}

	visit[y][x] = 1;

	while (!a.empty()) {
		pair<int, pair<int, int>> tmp = a.front();
		a.pop();
		int nx = tmp.second.first + light_x[tmp.first];
		int ny = tmp.second.second + light_y[tmp.first];

		if (nx < 0 || nx >= N || ny < 0 || ny >= N)
			continue;
		if (map[ny][nx] == 0) {			
			a.push({ tmp.first, {nx, ny} });
		}
		else if (map[ny][nx] == 1) {
			if (visit[ny][nx] == 0)
				cnt++;
			visit[ny][nx] = 1;
			switch (tmp.first) {
			case 0:
				a.push({ 3, {nx, ny} });
				break;
			case 1:
				a.push({ 2, {nx, ny} });
				break;
			case 2:
				a.push({ 1, {nx, ny} });
				break;
			case 3:
				a.push({ 0, {nx, ny} });
				break;
			}
		}
		else if (map[ny][nx] == 2) {
			if (visit[ny][nx] == 0)
				cnt++;
			visit[ny][nx] = 1;
			switch (tmp.first) {
			case 0:
				a.push({ 1, {nx, ny} });
				break;
			case 1:
				a.push({ 0, {nx, ny} });
				break;
			case 2:
				a.push({ 3, {nx, ny} });
				break;
			case 3:
				a.push({ 2, {nx, ny} });
				break;
			}
		}
	}
	return cnt;
}