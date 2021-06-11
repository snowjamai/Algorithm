#include <iostream>

using namespace std;

bool primal[1000001];

int main() {
	int M, N;
	
	for (int i = 2; i <= 1000000; ++i)
		primal[i] = true;

	for(int i = 2; i <= 1000000; ++i)
		if (primal[i] == true) {
			int tmp = 2;
			while (tmp * i <= 1000000)
				primal[i * tmp++] = false;
		}
	scanf("%d%d", &N, &M);

	for (int i = N; i <= M; ++i)
		if (primal[i] == true)
			printf("%d\n", i);

}