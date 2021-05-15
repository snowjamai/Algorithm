#include <iostream>

using namespace std;

int main() {
	int N;

	scanf("%d", &N);

	for (int n = N; n >= 0; --n) {
		for (int b = 0; b < N - n; ++b)
			printf(" ");
		for (int s = 0; s < n; ++s)
			printf("*");
		printf("\n");
	}
	return 0;
}