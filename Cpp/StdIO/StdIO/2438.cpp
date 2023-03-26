#include <iostream>

using namespace std;

int main() {
	int N;

	scanf("%d", &N);

	for (int n = 0; n < N; ++n) {
		for (int i = 0; i <= n; ++i)
			printf("*");
		printf("\n");
	}
}