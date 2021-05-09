#include <iostream>
#include <climits>
using namespace std;

int main() {
	int N, num;
	int min = INT_MAX, max = INT_MIN;

	scanf("%d", &N);
	for (int n = 0; n < N; ++n) {
		scanf("%d", &num);

		if (num < min)
			min = num;
		if (num > max)
			max = num;
	}
	printf("%d %d\n", min, max);

	return 0;
}