#include <iostream>

using namespace std;

int NUM[91];

int main() {
	int N;

	scanf("%d", &N);

	NUM[1] = 1;
	NUM[2] = 1;
	NUM[3] = 2;

	if (N > 3) {
		for (int i = 4; i <= N; ++i) {
			NUM[i] = 1;
			for (int j = 1; j <= i - 2; ++j)
				NUM[i] += NUM[j];
		}
	}
	printf("%d\n", NUM[N]);

}