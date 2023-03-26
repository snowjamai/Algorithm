#include <iostream>

using namespace std;

int main() {
	int N;

	scanf("%d", &N);

	for (int n = 0; n < N; ++n) {
		for (int b = 0; b < N - n - 1; ++b)
			printf(" ");
		for (int i = 0; i < 2 * n + 1; ++i)
			printf("*");
		printf("\n");
	}
}