#include <iostream>

using namespace std;

int main() {
	int A, B, T;

	scanf("%d", &T);

	for (int t = 0; t < T; ++t) {
		scanf("%d,%d", &A, &B);

		printf("%d\n", A + B);
	}
	return 0;
}