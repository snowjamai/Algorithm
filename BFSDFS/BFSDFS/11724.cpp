#include <iostream>
#include <queue>

using namespace std;
int map[1001][1001];
int visit[1001];

void BFS(int N, int start);

int cnt;

int main() {
	int N, M;

	scanf("%d%d", &N, &M);

	for (int m = 0; m < M; ++m) {
		int u, v;

		scanf("%d%d", &u, &v);
		map[u][v] = 1;
		map[v][u] = 1;
	}
	for (int i = 1; i <= N; ++i)
		if (visit[i] == 0)
			BFS(N, i);

	printf("%d", cnt);
}

void BFS(int N, int start) {
	queue<int> a;
	int cur, this_cnt = ++cnt;
	a.push(start);
	visit[start] = this_cnt;
	while (!a.empty()) {
		cur = a.front();
		a.pop();

		for (int n = 1; n <= N; ++n) {
			if (map[cur][n] == 1 && visit[n] == 0) {
				visit[n] = this_cnt;
				a.push(n);
			}

		}
	}
	
}