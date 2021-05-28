#include <iostream>

using namespace std;

int stair[302];
int DP[302];

int main() {
	int N;

	scanf("%d", &N);

	for (int i = 1; i <= N; ++i) {
		scanf("%d", &stair[i]);
	}
	DP[1] = stair[1];
	DP[2] = DP[1] + stair[2];

	for (int i = 3; i <= N; ++i) {
		if (DP[i - 2] > DP[i - 3] + stair[i - 1])
			DP[i] = DP[i - 2] + stair[i];
		else
			DP[i] = DP[i - 3] + stair[i - 1] + stair[i];
	}
	printf("%d", DP[N]);
}