#include <iostream>

using namespace std;

long long int DP[101][10];

int main() {
	int N;
	long long int sum = 0;
	scanf("%d", &N);
	for (int i = 1; i <= 9; ++i)
		DP[1][i] = 1;
	for (int i = 1; i < 9; ++i)
		DP[2][i] = 2;
	DP[2][9] = 1;
	
	for (int i = 3; i <= N; ++i) {
		for (int j = 2; j < 9; ++j) {			
			DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j + 1]) % 1000000000;			
		}
		DP[i][9] = DP[i - 1][8] % 1000000000;
		DP[i][1] = (DP[i - 1][2] + DP[i - 2][1]) % 1000000000;
	}
	for (int i = 1; i <= 9; ++i)
		sum = (sum + DP[N][i]) ;
	printf("%ld", sum%100000000000);
}                                                                                                                                                                                          