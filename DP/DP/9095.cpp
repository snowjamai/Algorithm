#include <iostream>

using namespace std;

int DP[12];

int main() {
	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;

	int N, T;
	scanf("%d", &T);

	for (int t = 0; t < T; ++t) {
		scanf("%d", &N);
		if(DP[N] == 0)
			for (int i = 4; i <= N; ++i)
				DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];

		printf("%d\n", DP[N]);
	}
	return 0;	
}