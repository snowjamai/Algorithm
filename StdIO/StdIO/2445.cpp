#include <iostream>

using namespace std;

int main() {
	int N;

	scanf("%d", &N);
	
	// up
	for (int i = 0; i < N - 1; ++i) {
		for (int s = 0; s <= i; ++s)
			printf("*");
		for (int b = N - i - 2; b >= 0; --b)
			printf(" ");
		for (int b = N - i - 2; b >= 0; --b)
			printf(" ");
		for (int s = 0; s <= i; ++s)
			printf("*");
		printf("\n");
	}
	for (int i = 0; i < 2 * N; ++i)
		printf("*");
	printf("\n");

	//down
	for (int i = 0; i < N - 1; ++i) {
		for (int s = N - 2 - i; s >= 0; --s)
			printf("*");
		for (int b = 0; b <= i; ++b)
			printf(" ");
		for (int b = 0; b <= i; ++b)
			printf(" ");
		for (int s = N - 2 - i; s >= 0; --s)
			printf("*");
		printf("\n");
	}


}