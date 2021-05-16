#include <iostream>

using namespace std;

int GetMin(int a, int b) {
	return a > b ? b : a;
}

long long int DP[1000001];

int main() {
	int X, num;

	scanf("%d", &X);
	DP[2] = 1;
	DP[3] = 1;

	for (int i = 4; i <= X; ++i) {
		if (i % 2 == 0) {
			num = GetMin(DP[i / 2], DP[i - 1]) + 1;
			DP[i] = num;
			if (i % 3 == 0) {
				num = GetMin(DP[i / 3] + 1, DP[i]);
				DP[i] = num;
			}
		}
		else if (i % 3 == 0) {
			num = GetMin(DP[i / 3], DP[i - 1]) + 1;
			DP[i] = num;
		}
		else
			DP[i] = DP[i - 1] + 1;
	}
	printf("%d\n", DP[X]);

}