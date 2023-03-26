#include <iostream>

using namespace std;

int main() {
	int N;

	scanf("%d", &N);

	if (N == 1)
		printf("*");
	else {
		for (int i = 0; i < 2 * N - 1; ++i)
			printf("*");
		printf("\n");

		for (int i = 0; i <= N - 2; ++i) {
			for (int b = 0; b <= i; ++b)
				printf(" ");
			for (int s = 2 * (N - i - 2); s >= 0; --s)
				printf("*");
			printf("\n");
		}

		for (int i = N - 3; i >= 0; --i) {
			for (int b = 0; b <= i; ++b)
				printf(" ");
			for (int s = 2 * (N - i - 2); s >= 0; --s)
				printf("*");
			printf("\n");
		}
		for (int i = 0; i < 2 * N - 1; ++i)
			printf("*");
		printf("\n");
	}
	return 0;
}