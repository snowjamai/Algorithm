#include <iostream>

using namespace std;

int num[100];

int main() {
	int N, B;
	int cnt = 0;
	scanf("%d%d", &N, &B);

	while (N) {
		num[cnt++] = N % B;
		N /= B;
	}

	for (int i = cnt - 1; i >= 0; --i) {
		if (num[i] >= 10)
			printf("%c", 'A' + num[i] - 10);
		else
			printf("%d", num[i]);
	}
		
}