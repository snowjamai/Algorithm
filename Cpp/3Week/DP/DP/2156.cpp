#include <iostream>

int Num[10001];
int Max[10001];

int big(int a, int b);

int main() {
	int N;

	scanf("%d", &N);

	for (int n = 1; n <= N; ++n) {
		scanf("%d", &Num[n]);
	}
	Max[1] = Num[1];
	Max[2] = Num[2];

	for (int i = 3; i <= N; ++i)
		Max[i] = big(Max[i - 2], Max[i - 3] + Num[i - 1]) + Num[i];

	printf("%d", big(Max[N], Max[N - 1]));

}

int big(int a, int b) {
	return a > b ? a : b;
}