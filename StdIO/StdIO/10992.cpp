#include <iostream>

using namespace std;

int main() {
	int N;

	scanf("%d", &N);

	for (int l = 1; l <= N; ++l) {
		for (int b = N - l; b > 0; --b)
			printf(" ");
		printf("*");
		if (l == N)
			for (int i = 1; i < 2 * l - 1; ++i)
				printf("*");
		else {
			for (int b = 0; b < 2 * l - 3; ++b)
				printf(" ");
		}
		if (l != 1 && l != N)
			printf("*");

		printf("\n");
	}
	
}