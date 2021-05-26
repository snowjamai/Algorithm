#include <iostream>

using namespace std;
int arr[1001];
int DownDP[1001];
int UpDP[1001];

int main() {
	int N;

	scanf("%d", &N);

	for (int i = 1; i <= N; ++i)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= N; ++i) {
		int m = 0;

		for (int j = 1; j < i; ++j)
			if (arr[j] < arr[i])
				if (m < UpDP[j])
					m = UpDP[j];
		UpDP[i] = m + 1;
	}

	for (int i = N; i >= 1; --i) {
		int m = 0;
		
		for (int j = N; j >= i + 1; --j)
			if (arr[i] > arr[j])
				if (m < DownDP[j])
					m = DownDP[j];
		DownDP[i] = m + 1;
	}
	int sum, max = 0;
	for (int i = 1; i <= N; ++i) {
		sum = UpDP[i] + DownDP[i];
		if (max < sum)
			max = sum;
	}
	printf("%d", max);
}