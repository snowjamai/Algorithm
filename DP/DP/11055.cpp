#include <iostream>

using namespace std;

int arr[1001];
long long int Max[1001];


int main() {
	int N;

	scanf("%d", &N);

	for (int i = 1; i <= N; ++i)
		scanf("%d", &arr[i]);

	Max[1] = arr[1];
	
	for (int i = 2; i <= N; ++i) {
		long long int m = 0;
		for (int j = 1; j <= i - 1; ++j) {
			if (arr[j] < arr[i]) {
				if (Max[j] > m)
					m = Max[j];
			}
		}
		Max[i] = m + arr[i];
	}
	
	long long int max = 0;

	for (int i = 1; i <= N; ++i)
		if (max < arr[i])
			max = arr[i];

	printf("%lld", max);
}