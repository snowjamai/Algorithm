#include <iostream>

using namespace std;

int num[10001];

int main() {
	int N;
	int n;

	scanf("%d", &N);

	for (int i = 0; i < N; ++i) {
		scanf("%d", &n);
		num[n]++;
	}
	for (int i = 0; i < 10001; ++i)
		if (num[i] != 0)
			for(int j = 0; j < num[i]; ++j)
				printf("%d\n", i);
	
}