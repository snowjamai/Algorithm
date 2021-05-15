#include <iostream>

using namespace std;

int main() {
	int T, A, B;

	scanf("%d", &T);

	for (int t = 0; t < T; ++t) {
		scanf("%d%d", &A, &B);
		printf("Case #%d: %d\n", t + 1, A + B);
	}
	return 0;
}