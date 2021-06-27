#include <iostream>
#include <queue>

using namespace std;

int map[100][100];
int visit[100][100];

int mv_x[] = { 1, -1, 0, 0 };
int mv_y[] = { 0, 0, 1, -1 };
int cnt = 0;
void BFS(int h, int w, int N, int M);

int main() {
	int N, M;

	scanf("%d%d", &N, &M);
	
	for (int h = 0; h < N; ++h)
		for (int w = 0; w < M; ++w)
			scanf("%1d", &map[h][w]);
	BFS(0, 0, N, M);

	printf("%d", visit[N - 1][M - 1]);
}

void BFS(int x, int y, int N, int M) {
	queue<pair<int, pair<int, int>>> a;

	a.push({ 1, { x, y } });
	visit[y][x] = 1;

	while (!a.empty()) {
		pair<int, pair<int, int>> tmp = a.front();
		a.pop();

		for (int i = 0; i < 4; ++i) {
			int nx = tmp.second.first + mv_x[i];
			int ny = tmp.second.second + mv_y[i];
			
			if (nx < 0 || nx >= M || ny < 0 || ny >= N)
				continue;
			if (map[ny][nx] == 1) {
				if (visit[ny][nx] == 0) {
					visit[ny][nx] = tmp.first + 1;
					a.push({ tmp.first + 1, {nx, ny} });
				}
				else if (visit[ny][nx] > tmp.first + 1) {
					visit[ny][nx] = tmp.first + 1;
					a.push({ tmp.first + 1, {nx, ny} });
				}
			}
		}
	}
}