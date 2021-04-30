#include <iostream>

using namespace std;

int NUM[10];

int GetTotal(int n, int total, int num);

int main() {
	int N;

	NUM[0] = 1;
	NUM[1] = NUM[2] = NUM[3] = NUM[4] = NUM[5] = NUM[6] = NUM[7] = NUM[8] = 2;
	NUM[9] = 1;
	scanf("%d", &N);

	if (N >= 3) {
		for (int i = 3; i <= N; ++i)
			NUM[i] = (2 * (NUM[i - 1] - 1) + 1) % 1000000000;
	}
	printf("%d", NUM[N]);

}

int GetTotal(int n, int total, int val) {
	if (n == total)
		return val;
	else {
		for (int i = 1; i < 10; ++i) {
			GetTotal(n + 1, total, )
		}
		
	}
}