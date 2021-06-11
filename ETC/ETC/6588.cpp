#include <iostream>

using namespace std;

bool primal[1000001];

int main() {
	int N;

	for (int i = 2; i <= 1000000; ++i)
		primal[i] = true;

	for(int i = 2; i <= 1000000; ++i)
		if (primal[i] == true) {
			int tmp = 2;
			
			while (i * tmp <= 1000000) {
				primal[i * tmp++] = false;
			}
		}
	while (1) {
		scanf("%d", &N);

		if (N == 0)
			break;
		else {
			for(int i = 2; i <= N / 2; ++i)
				if (primal[i] == true && primal[N - i] == true) {
					printf("%d = %d + %d", N, i, N - i);
					break;
				}

		}
	}
}