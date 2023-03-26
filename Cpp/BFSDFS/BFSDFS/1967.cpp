#include <iostream>
#include <vector>

using namespace std;

vector <pair< int, int>> tree[10001];

bool visit[10001];

int max_len;
int max_node;
void DFS(int start, int len);

int main() {
	int N;
	int par, chi, W;

	scanf("%d", &N);

	for (int n = 0; n < N - 1; ++n) {
		cin >> par >> chi >> W;

		tree[par].push_back({ chi, W });
		tree[chi].push_back({ par, W });
	}
	DFS(1, 0);
	for (int i = 0; i <= N; ++i)
		visit[i] = false;
	DFS(max_node, 0);

	printf("%d", max_len);
		
}

void DFS(int start, int len) {
	if (visit[start] == true) {
		
		return;
	}
	if (len > max_len) {
		max_len = len;
		max_node = start;
	}
	visit[start] = true;

	for (int i = 0; i < tree[start].size(); ++i)
		DFS(tree[start][i].first, len + tree[start][i].second);
}