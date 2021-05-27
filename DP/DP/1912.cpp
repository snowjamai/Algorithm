#include <iostream>

int LDP[100002];
int RDP[100002];
int num[100002];


int main() {
	int N;

	scanf("%d", &N);

	for (int i = 1; i <= N; ++i)
		scanf("%d", &num[i]);
	
	for (int i = 1; i <= N; ++i) {
		if (LDP[i - 1] + num[i] < num[i])
			LDP[i] = num[i];
		else
			LDP[i] = LDP[i - 1] + num[i];
	}

	for (int i = N; i >= 1; --i) {
		if (RDP[i + 1] + num[i] < num[i])
			RDP[i] = num[i];
		else
			RDP[i] = num[i] + RDP[i + 1];
	}
	int sum;
	int max = -100000;

	for (int i = 1; i <= N; ++i) {
		sum = LDP[i] + RDP[i] - num[i];
		if (sum > max)
			max = sum;
	}
	printf("%d", max);
}