#include <iostream>

using namespace std;

int DP[1000][100];

int main() {
	for (int i = 0; i <= 9; ++i)
		DP[1][i] = 1;
	int N;
	int sum = 0;

	scanf("%d", &N);

	for (int n = 2; n <= N; ++n) {
		for (int i = 0; i <= 9; ++i)
			for (int j = 0; j <= 9; ++j)
				if (i <= j)
					DP[n][i] = (DP[n][i] + DP[n - 1][j]) % 10007;
	}
	for (int i = 0; i <= 9; ++i)
		sum = (sum + DP[N][i]) % 10007;
	printf("%d", sum);
}