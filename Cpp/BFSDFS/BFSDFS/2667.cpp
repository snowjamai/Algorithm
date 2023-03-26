#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int map[26][26];
int visit[26][26];

int mv_x[] = { 1,-1, 0, 0 };
int mv_y[] = { 0, 0, 1, -1 };

int danji;
vector<int> re;
void BFS(int x, int y, int N);

int main() {
	int N;

	scanf("%d", &N);

	for (int h = 0; h < N; ++h)
		for (int w = 0; w < N; ++w)
			scanf(" %c", &map[h][w]);

	for (int h = 0; h < N; ++h)
		for (int w = 0; w < N; ++w)
			if (map[h][w] == '1' && visit[h][w] == 0)
				BFS(w, h, N);
	
	sort(re.begin(), re.end());

	for (int i = 0; i < re.size(); ++i)
		printf("%d\n", re[i]);

}

void BFS(int x, int y, int N) {
	queue<pair<int, int>> a;
	int cnt = 0;
	danji++;
	a.push({ x, y });
	visit[y][x] = danji;

	while (!a.empty()) {
		cnt++;
		pair<int, int> tmp = a.front();
		a.pop();

		for (int i = 0; i < 4; ++i) {
			int nx = tmp.first + mv_x[i];
			int ny = tmp.second + mv_y[i];

			if (nx < 0 || nx >= N || ny < 0 || ny >= N)
				continue;
			if (map[ny][nx] == '1' && visit[ny][nx] == 0) {
				visit[ny][nx] = danji;
				a.push({ nx, ny });
			}
			
		}
	}
	re.push_back(cnt);
}