#include <iostream>

using namespace std;

int DP[1001];

int main() {
	int N;

	scanf("%d", &N);
	
	DP[1] = 1;
	DP[2] = 2;

	for (int i = 3; i <= N; ++i)
		DP[i] = (DP[i - 1] + DP[i - 2]) % 10007;
	printf("%d\n", DP[N]);

}