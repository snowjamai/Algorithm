#include <iostream>

using namespace std;

int arr[1001];
long long int DP[1001];

int main() {
	int N;

	scanf("%d", &N);

	for (int i = 1; i <= N; ++i)
		scanf("%d", &arr[i]);

	DP[1] = 1;

	for (int i = 2; i <= N; ++i) {
		long long int max = 0;

		for (int j = 1; j < N; ++j) {
			if (arr[j] > arr[i])
				if (max < DP[j])
					max = DP[j];
		}
		DP[i] = max + 1;
	}
	long long int m = 0;

	for (int i = 1; i <= N; ++i) {
		if (m < DP[i])
			m = DP[i];
	}
	printf("%lld", m);
}