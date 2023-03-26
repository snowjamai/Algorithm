#include <iostream>
#include <queue>

using namespace std;

int map[100][100];
int visit[100][100];
int continent;

void FindContinent(int w, int h, int N);
int mv_x[] = { 1,-1, 0, 0 };
int mv_y[] = { 0, 0, 1, -1 };

int min_dist = 300;

int GetDist(int h, int w, int N);

int main() {
	int N;
	int dist;

	scanf("%d", &N);

	for (int h = 0; h < N; ++h)
		for (int w = 0; w < N; ++w)
			scanf("%d", &map[h][w]);

	for (int h = 0; h < N; ++h)
		for (int w = 0; w < N; ++w)
			if (map[h][w] == 1 && visit[h][w] == 0)
				FindContinent(w, h, N);

	for (int h = 0; h < N; ++h)
		for (int w = 0; w < N; ++w)
			if (map[h][w] != 0) {
				dist = GetDist(h, w, N);

				if (dist < min_dist)
					min_dist = dist;
			}
	printf("%d", min_dist);

}

void FindContinent(int w, int h, int N) {
	queue<pair<int, int>> a;
	int nx, ny;
	continent++;

	a.push(make_pair(w, h));
	map[h][w] = continent;
	visit[h][w] = 1;

	while (!a.empty()) {
		pair<int, int> tmp;

		tmp = a.front();
		a.pop();

		for (int i = 0; i < 4; ++i) {
			nx = tmp.first + mv_x[i];
			ny = tmp.second + mv_y[i];

			if (nx < 0 || nx >= N || ny < 0 || ny >= N)
				continue;
			else if (map[ny][nx] != 0 && visit[ny][nx] == 0) {
				visit[ny][nx] = 1;
				map[ny][nx] = continent;
				a.push(make_pair(nx, ny));
			}
		}
	}
}

int GetDist(int th, int tw, int N) {
	int dist;
	int local_dist = 300;

	for(int h = 0; h < N; ++h)
		for (int w = 0; w < N; ++w) {
			if (map[h][w] != 0 && map[h][w] != map[th][tw]) {
				dist = (h - th < 0 ? th - h : h - th) + (w - tw < 0 ? tw - w : w - tw);
				if (dist < local_dist)
					local_dist = dist;
			}
		}
	return local_dist;
}