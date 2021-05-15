#include <iostream>

using namespace std;

int main() {
	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; ++i) {
		for (int b = N - i - 1; b > 0; --b)
			printf(" ");
		for (int l = 0; l <= i * 2 + 1; ++l) {
			if (l % 2 == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}