#include <iostream>

using namespace std;

int DP[100][100001];

int max(int a, int b);

int main() {
	int N, K, W, V;

	scanf("%d%d", &N, &K);

	for (int i = 0; i < N; ++i) {
		scanf("%d%d", &W, &V);

		for (int k = 0; k <= K; ++k) {
			if (i == 0) {
				if (k >= W)	DP[i][k] = V;
			}
			else {
				if(k < W)
					DP[i][k] = DP[i - 1][k];
				else if (k >= W) 
					DP[i][k] = max(DP[i - 1][k], V + DP[i][k - W]);
				
				
			}
		}
	}
	printf("%d", DP[N-1][K]);
}


int max(int a, int b) {
	return a > b ? a : b;
}