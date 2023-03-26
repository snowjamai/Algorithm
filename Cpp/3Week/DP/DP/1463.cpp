#include<iostream>

using namespace std;
int NUM[1000000];

int main() {
	int X, tmp;

	scanf("%d", &X);
	NUM[1] = 0;
	NUM[2] = 1;
	NUM[3] = 1;
	if (X < 4)
		printf("%d", NUM[X]);
	else {
		for (int i = 4; i <= X; ++i) {
			NUM[i] = NUM[i - 1] + 1;
		
			if (i % 3 == 0)
				NUM[i] = ((NUM[i] < NUM[i / 3] + 1) ? NUM[i] : NUM[i / 3] + 1);
			if (i % 2 == 0)
				NUM[i] = ((NUM[i] < NUM[i / 2] + 1) ? NUM[i] : NUM[i / 2] + 1);
			
		}
		printf("%d", NUM[X]);
	}
	return 0;
}