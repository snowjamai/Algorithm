#include <iostream>

using namespace std;

int S_S[2][100002];
int D_S[2][100002];

int main() {
	int T, N;

	scanf("%d", &T);

	for (int t = 0; t < T; ++t) {
		scanf("%d", &N);
		
		for(int j = 0; j < 2; ++j)
			for (int i = 1; i <= N; ++i)
				scanf("%d", &S_S[j][i]);
		
		
		D_S[0][1] = S_S[0][1];
		D_S[1][1] = S_S[1][1];
		
		for(int i = 1; i <= N; ++i)
			for (int j = 0; j < 2; ++j) {
				D_S[j][i] = (D_S[(j + 1) % 2][i - 1] > D_S[(j + 1) % 2][i - 2] ? D_S[(j + 1) % 2][i - 1] + S_S[j][i] : D_S[(j + 1) % 2][i - 2] + S_S[j][i]);
			}
		int max = D_S[0][N] > D_S[1][N] ? D_S[0][N] : D_S[1][N];

		printf("%d", max);
	}
}