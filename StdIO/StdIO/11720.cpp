#include <iostream>

using namespace std;

int main() {
	int N, num, sum = 0;
	
	scanf("%d", &N);

	for (int n = 0; n < N; ++n) {
		scanf("%1d", &num);
		sum += num;
	}
	printf("%d\n", sum);

	return 0;
}