#include <iostream>

using namespace std;

int NUM[1001];

int main() {
	int N;

	scanf("%d", &N);
	NUM[1] = 1;
	NUM[2] = 3;

	if (N >= 3) {
		for (int i = 3; i <= N; ++i) {
			NUM[i] = (NUM[i - 1] + 2 * NUM[i - 2]) % 10007;
		}
	}
	printf("%d", NUM[N]);
}