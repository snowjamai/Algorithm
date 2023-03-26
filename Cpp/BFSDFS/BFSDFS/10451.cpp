#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[1001];
int visit[1001];

void DFS(int start) {
	visit[start] = 1;
	if (visit[map[start]]) return;
	return DFS(map[start]);
}
int main() {
	int T, N;

	scanf("%d", &T);

	for (int t = 0; t < T; ++t) {
		scanf("%d", &N);

		for (int n = 1; n <= N; ++n) {
			int v;

			scanf("%d", &map[n]);

		}
		int cnt = 0;
		for (int i = 1; i <= N; ++i) {
			if (visit[i] == 0) {
				DFS(i);
				cnt++;					
			}
		}
		printf("%d\n", cnt);
		for (int i = 1; i <= N; ++i)
			visit[i] = 0;
	}
}
