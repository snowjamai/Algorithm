#include <iostream>

using namespace std;

int GetGCD(int a, int b);

int main() {
	int A, B, T;

	scanf("%d", &T);

	for (int t = 0; t < T; ++t) {
		scanf("%d%d", &A, &B);

		printf("%d\n", A* B / GetGCD(A, B));
	}
	
}
int GetGCD(int a, int b) {
	if (b == 0)
		return a;
	else
		return GetGCD(b, a % b);
}