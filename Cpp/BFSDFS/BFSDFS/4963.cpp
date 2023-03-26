#include <iostream>
#include <queue>

using namespace std;

int map[51][51];
int visit[51][51];
int land;

int mv_x[] = { 1,-1, 0, 0, 1, 1, -1, -1 };
int mv_y[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
void BFS(int x, int y, int W, int H);

int main() {
	int W, H;
	while (1) {
		scanf("%d%d", &W, &H);

		if (W == 0 && H == 0)
			break;
		for (int i = 0; i < H; ++i)
			for (int j = 0; j < W; ++j)
				scanf("%d", &map[i][j]);

		for (int i = 0; i < H; ++i)
			for (int j = 0; j < W; ++j)
				if (map[i][j] == 1 && visit[i][j] == 0)
					BFS(j, i, W, H);

		printf("%d\n", land);

		land = 0;


		for (int i = 0; i < H; ++i)
			for (int j = 0; j < W; ++j)
				visit[i][j] = -0;

	}
}

void BFS(int x, int y, int W, int H) {
	queue<pair<int, int>> a;
	land++;
	a.push({ x,y });
	visit[y][x] = land;

	while (!a.empty()) {
		pair<int, int> tmp = a.front();
		a.pop();

		for (int i = 0; i < 8; ++i) {
			int nx = tmp.first + mv_x[i];
			int ny = tmp.second + mv_y[i];

			if (nx < 0 || nx >= W || ny < 0 || ny >= H)
				continue;

			if (map[ny][nx] == 1 && visit[ny][nx] == 0) {
				visit[ny][nx] = land;
				a.push({ nx, ny });
			}
		}
	}

}