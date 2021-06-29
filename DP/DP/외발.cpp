#include <iostream>

using namespace std;

int map[101][101];
int DP[101][101];

int mv_x[] = { 0, 1 };
int mv_y[] = { 1, 0 };
int find_v;
void DFS(int x, int y, int N);

int main() {
	int C, N;

	cin >> C;
	for (int c = 0; c < C; ++c) {

		cin >> N;
		for (int h = 0; h < N; ++h)
			for (int w = 0; w < N; ++w)
				cin >> map[h][w];
		DFS(0, 0, N);




		if (find_v == 0)
			printf("NO\n");
		else
			printf("YES\n");

		for (int w = 0; w < N; ++w)
			for (int h = 0; h < N; ++h)
				DP[w][h] = 0;
		find_v = 0;
	}
}


void DFS(int x, int y, int N) {

	DP[y][x] = 1;
	if (y == N - 1 && x == N - 1) {
		find_v = 1;
		return;
	}
	for (int i = 0; i < 2; ++i) {
		int nx = x + mv_x[i] * map[y][x];
		int ny = y + mv_y[i] * map[y][x];


		if (nx < 0 || ny < 0 || nx >= N || ny >= N)
			continue;
		if (DP[ny][nx] == 0)
			DFS(nx, ny, N);
	}
}