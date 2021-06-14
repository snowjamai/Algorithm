#include <iostream>
#include <queue>

using namespace std;

int map[1001][1001];
int visit[1001];

void BFS(int M, int start);
void DFS(int M, int node);

int main() {
	int N, M, start;
	int na, nb;
	scanf("%d%d%d", &N, &M, &start);
	
	for (int m = 1; m <= M; ++m) {
		scanf("%d%d", &na, &nb);
		
		map[na][nb] = 1;
		map[nb][na] = 1;

	}
	DFS(N, start);
	printf("\n");
	for (int i = 1; i <= N; ++i)
		visit[i] = 0;
	BFS(N, start);
}

void BFS(int M, int start) {
	queue<int> a;
	int cur;
	
	a.push(start);
	visit[start] = 1;

	while (1) {
		if (a.empty() == true)
			break;
		else {
			int cur = a.front();
			a.pop();
			printf("%d ", cur);			

			for (int i = 1; i <= M ; ++i)
				if (i != cur && map[cur][i] == 1 && visit[i] != 1) {
					a.push(i);
					visit[i] = 1;					
				}
		}
		
	}
}

void DFS(int M, int node) {
	printf("%d ", node);
	visit[node] = 1;

	for (int i = 1; i <= M; ++i) {
		if (map[node][i] == 1 && visit[i] != 1 && i != node) {
			DFS(M, i);			
		}
	}
		
}