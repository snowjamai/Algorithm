#include <iostream>

using namespace std;

int main() {
	int N;

	scanf("%d", &N);

	for (int i = 0; i < N - 1; ++i) {
		for (int b = 0; b < N - i - 1; ++b)
			printf(" ");
		for (int s = 0; s <= i; ++s)
			printf("*");
		printf("\n");
	}
	for (int i = 0; i < N; ++i)
		printf("*");
	printf("\n");

	for (int i = 0; i < N - 1; ++i) {
		for (int b = 0; b <= i; ++b)
			printf(" ");
		for (int s = 0; s < N - i - 1; ++s)
			printf("*");
		printf("\n");
	}
	return 0;
}