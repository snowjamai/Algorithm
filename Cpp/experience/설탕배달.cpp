#include <iostream>

using namespace std;

int sultang[5001];

int main() {
	int N;

	sultang[0] = 0;
	sultang[1] = 0;
	sultang[2] = 0;
	sultang[3] = 1;
	sultang[4] = 0;
	sultang[5] = 1;
	
	scanf("%d", &N);

	for (int i = 6; i <= N; ++i) {
		if (sultang[i - 3] != 0) {
			if (sultang[i - 5] != 0) {
				if (sultang[i - 3] < sultang[i - 5])
					sultang[i] = sultang[i - 3] + 1;
				else
					sultang[i] = sultang[i - 5] + 1;
			}
			else {
				sultang[i] = sultang[i - 3] + 1;
			}
		}
		else {
			if (sultang[i - 5] != 0) {
				sultang[i] = sultang[i - 5] + 1;
			}
			else
				sultang[i] = 0;
		}
	}
	if (sultang[N] == 0)
		printf("-1\n");
	else
		printf("%d\n",sultang[N] );
}