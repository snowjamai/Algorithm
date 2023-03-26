#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> tree[100001];
int visit[100001];

int max = 0;
int max_node;

void DFS(int s, int len);

int main() {
	int V;
	
	scanf("%d", &V);
	int k;

	for (int v = 0; v < V; ++v) {
		scanf("%d", &k);
		while (1) {
			int con, len;

			scanf("%d", &con);

			if (con == -1)
				break;
			else {
				scanf("%d", &len);
				
				tree[k].push_back(make_pair(con, len));
			}

				          
		}
	}
	for (int v = 1; v <= V; ++v) {
		if (tree[v].size() == 1) {
			visit[v] = 1;
			DFS(v, 0);
			visit[v] = 0;
			break;
		}		
	}
	visit[max_node] = 1;
	DFS(max_node, 0);
	printf("%d", max);
}

void DFS(int s, int len) {
	if (len > max) {
		max = len;
		max_node = s;
	}
	for (int i = 0; i < tree[s].size(); ++i) {
		if (visit[tree[s][i].first] == 0) {
			visit[tree[s][i].first] = 1;
			DFS(tree[s][i].first, tree[s][i].second + len);
			visit[tree[s][i].first] = 0;
			
		}
	}
}