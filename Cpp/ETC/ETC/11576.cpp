#include <iostream>

using namespace std;

int re[21];
int len;
int Pow(int x, int n);

int main() {
	int A, B;
	int T, num;
	int sum = 0;

	scanf("%d%d", &A, &B);
	scanf("%d", &T);

	for (int t = T - 1; t >= 0; --t) {
		scanf("%d", &num);

		sum += num * Pow(A, t);
	}
	while (sum) {
		re[len++] = sum % B;
		sum = sum / B;
	}
	for (int i = len - 1; i >= 0; --i)
		printf("%d ", re[i]);
}

int Pow(int x, int n) {
	int res = 1;

	for (int i = 1; i <= n; ++i)
		res = res * x;
	return res;
}