#include <iostream>

using namespace std;

int main() {
	int N;

	scanf("%d", &N);

	for (int n = N; n >= 0; --n) {
		for (int i = 0; i < n; ++i)
			printf("*");
		printf("\n");
	}
	return 0;
}