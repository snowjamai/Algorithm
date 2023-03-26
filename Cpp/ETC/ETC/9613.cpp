#include <iostream>

using namespace std;

int num[101];

int GetGCD(int a, int b);

int main() {
	int T, N;
	int sum;
	scanf("%d", &T);

	for (int t = 0; t < T; ++t) {
		scanf("%d", &N);
		sum = 0;
		for (int n = 0; n < N; ++n) 
			scanf("%d", &num[n]);
		
		for (int i = 0; i < N - 1; ++i)
			for (int j = i + 1; j < N; ++j)
				sum += GetGCD(num[i], num[j]);
		printf("%d\n", sum);
	}
}
int GetGCD(int a, int b) {
	if (b == 0)
		return a;
	else
		return GetGCD(b, a % b);
}