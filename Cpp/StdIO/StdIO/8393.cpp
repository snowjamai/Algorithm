#include <iostream>

using namespace std;

int main() {
	int N, sum = 0;

	scanf("%d", &N);

	for (int n = 1; n <= N; ++n)
		sum += n;
	printf("%d\n", sum);

	return 0;
}