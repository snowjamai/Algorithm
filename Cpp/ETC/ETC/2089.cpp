#include <iostream>

using namespace std;

int num[100];
int len;

int main() {
	int N;

	scanf("%d", &N);
	
	while (N) {
		if (N < 0) {
			
			num[len++] = -(N % -2);
			if (N % -2 != 0)
				N = N / -2 + 1;
			else
				N = N / -2;
		}
		else {
			num[len++] = N % -2;
			N /= -2;
		}
		
	}
	
	for (int i = len - 1; i >= 0; --i) {
		
			printf("%d", num[i]);

	}
}