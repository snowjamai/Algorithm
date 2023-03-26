#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> map[20001];

int color[20001];

bool BFS(int M, int start);


int main() {
	int K, V, E;
	int f = 1;

	scanf("%d", &K);


	for (int k = 0; k < K; ++k) {
		scanf("%d%d", &V, &E);

		f = 1;
		for (int h = 1; h <= V; ++h) {
			color[h] = 0;
			map[h].clear();
		}
		
		int a, b;
		for (int e = 0; e < E; ++e) {
			scanf("%d%d", &a, &b);
			map[a].push_back(b);
			map[b].push_back(a);			
		}
		for(int i = 1; i <= V; ++i)
			if(color[i] == 0)
				if (BFS(V, i) == false) {
					printf("NO\n");
					f = 0;
					break;
				}
		if(f == 1)
			printf("YES\n");
	}
}

bool BFS(int V, int start) {
	queue <int> a;
	int prev = -1, cur;

	a.push(start);
	color[start] = -1;

	while (!a.empty()) {
		cur = a.front();
		a.pop();

		for (int i = 0; i < map[cur].size(); ++i) {
			int next = map[cur][i];
			if (color[next] == 0) {
				color[next] = color[cur] * -1;
				a.push(next);
			}
			else if (color[next] * color[cur] == 1)
				return false;
		}
		
	}
	return true;
}