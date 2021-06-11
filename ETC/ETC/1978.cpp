#include <iostream>

using namespace std;

bool primal[1001];

int main() {
	int N, num;
	primal[1] = false;
	for (int i = 2; i <= 1000; ++i)
		primal[i] = true;

	for (int i = 2; i <= 1000; ++i)
		if (primal[i] == true) {
			int tmp = 2;
			while (tmp * i <= 1000)
				primal[i * tmp++] = false;
		}
	scanf("%d", &N);
	int cnt = 0;

	for (int n = 0; n < N; ++n) {
		scanf("%d", &num);
		if (primal[num] == true)
			cnt++;
	}
	printf("%d", cnt);
}