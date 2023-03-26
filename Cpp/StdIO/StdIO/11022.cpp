#include <iostream>

using namespace std;

int main() {
	int T, A, B;

	for (int t = 0; t < T; ++t) {
		scanf("%d%d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", t + 1, A, B, A + B);
	}
	return 0;
}