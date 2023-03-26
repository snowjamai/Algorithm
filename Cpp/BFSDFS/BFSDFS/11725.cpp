#include <iostream>
#include <vector>

using namespace std;
vector<int> tree[100001];
int par[100001];

void DFS(int s);

int main() {
	int N;
	int a, b;
	scanf("%d", &N);

	for (int n = 0; n < N - 1; ++n) {
		scanf("%d%d", &a, &b);
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	par[1] = 1;
	DFS(1);

	for (int i = 2; i <= N; ++i)
		printf("%d\n", par[i]);
		 
}

void DFS(int s) {
	for (int i = 0; i < tree[s].size(); ++i) {
		if (par[tree[s][i]] == 0) {
			par[tree[s][i]] = s;
			DFS(tree[s][i]);
		}

	}
}