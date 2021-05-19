#include <iostream>

using namespace std;

long long int sticker[2][100001];
long long int DP[2][100001];

int max_v(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int T, N;

	scanf("%d", &T);

	for (int t = 0; t < T; ++t) {
		scanf("%d", &N);
		for (int h = 0; h < 2; ++h)
			for (int w = 1; w <= N; ++w)
				scanf("%d", &sticker[h][w]);
		for (int i = 1; i <= N; ++i) {
			DP[1][i] = max_v(DP[0][i - 1], DP[0][i - 2]) + sticker[1][i];
			DP[0][i] = max_v(DP[1][i - 1], DP[1][i - 2]) + sticker[0][i];
		}
		long long int re;

		re = max_v(DP[0][N], DP[1][N]);
		re = max_v(re, DP[0][N - 1]);
		re = max_v(re, DP[1][N - 1]);
		printf("%lld\n", re);
	}
}