#include <iostream>

using namespace std;

int DP[101];

int main() {
	int T, N;

	scanf("%d", &T);
	DP[3] = DP[2] = DP[1] = 1;
	DP[4] = DP[5] = 2;

	for (int t = 0; t < T; ++t) {
		scanf("%d", &N);

		if (DP[N] != 0)
			printf("%d\n", DP[N]);
		else {
			for (int i = 6; i <= N; ++i)
				DP[i] = DP[i - 1] + DP[i - 5];
			printf("%d\n", DP[N]);
		}
	}
}