#include <iostream>

using namespace std;

int NUM[12];

int main() {
	int N;
	int T;

	scanf("%d", &T);
	NUM[1] = 1;
	NUM[2] = 2;
	NUM[3] = 4;

	for (int t = 0; t < T; ++t) {
		scanf("%d", &N);
		
		if (N > 3 && NUM[N] == 0) {
			for (int i = 4; i <= N; ++i)
				NUM[i] = NUM[i - 1] + NUM[i - 2] + NUM[i - 3];
		}
		printf("%d\n", NUM[N]);
	}

}