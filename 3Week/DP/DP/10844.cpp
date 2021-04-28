#include <iostream>

using namespace std;

int NUM[101];

int main() {
	int N;

	NUM[1] = 9;
	NUM[2] = 17;
	scanf("%d", &N);
	if (N >= 3) {
		for (int i = 3; i <= N; ++i)
			NUM[i] = (2 * (NUM[i - 1] - 1) + 1) % 1000000000;
	}
	printf("%d", NUM[N]);

}