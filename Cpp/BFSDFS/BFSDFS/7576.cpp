#include <iostream>
#include <queue>

using namespace std;

int box[1001][1001];
int visit[1001][1001];

int ik = 0;
int anik = 0;
queue<pair<int, pair<int, int>>> a;

int mv_x[] = { 1, -1, 0, 0 };
int mv_y[] = { 0, 0, 1, -1 };
void BFS(int W, int H);
int main() {
	int N, M;

	scanf("%d%d", &M, &N);

	for(int n = 0; n < N; ++n)
		for (int m = 0; m < M; ++m) {
			scanf("%d", &box[n][m]);

			if (box[n][m] == 1)
				a.push({ 0, { m,n } });
			else if (box[n][m] == 0)
				anik++;
		}

	if (anik == 0)
		printf("0");
	else
		BFS(M, N);
}

void BFS(int W, int H) {
	int re = 0;
	int sub_v = a.size();
	while (!a.empty()) {
		pair<int, pair<int, int>> tmp = a.front();
		a.pop();
		ik++;
		if (re < tmp.first)
			re = tmp.first;
		for (int i = 0; i < 4; ++i) {
			int nx = tmp.second.first + mv_x[i];
			int ny = tmp.second.second + mv_y[i];

			if (nx < 0 || nx >= W || ny < 0 || ny >= H)
				continue;
			if (box[ny][nx] == 0) {
				box[ny][nx] = 1;
				a.push({ tmp.first + 1, { nx, ny } });
			}
		}
	}
	if (ik - sub_v == anik)
		printf("%d", re);
	else
		printf("-1");
}