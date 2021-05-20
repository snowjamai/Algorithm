#include <iostream>

using namespace std;

long long int grape[10001];
long long int DP[10001];

long long int max_v(long long int a, long long int b) {
	return a > b ? a : b;
}

int main() {
	int T;
	long long int m;

	scanf("%d", &T);

	for (int i = 1; i <= T; ++i)
		scanf("%d", &grape[i]);
	for (int i = 1; i <= T; ++i) {
		m = max_v(DP[i - 3] + grape[i - 1] + grape[i], DP[i - 2] + grape[i]);
		m = max_v(m, DP[i - 4] + grape[i - 1] + grape[i]);
		DP[i] = m;
	}		
	printf("%lld", max_v(DP[T], DP[T- 1]));

}