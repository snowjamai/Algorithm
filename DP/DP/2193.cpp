#include <iostream>

using namespace std;

long long int DP[91];

int main() {
	int N;

	scanf("%d", &N);

	DP[1] = 1;
	DP[2] = 1;
	DP[3] = 2;

	for (int i = 4; i <= N; ++i) {
		DP[i] = 1;
		for (int j = 1; j <= i - 2; ++j)
			DP[i] += DP[j];
	}
	printf("%lld", DP[N]);
}