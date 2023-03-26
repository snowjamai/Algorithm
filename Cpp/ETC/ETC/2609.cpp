#include <iostream>

using namespace std;

int GetGCD(int a, int b);

int main() {
	int A, B;
	int gcd;

	scanf("%d%d", &A, &B);

	gcd = GetGCD(A, B);

	printf("%d\n%d", gcd, (A / gcd) * B);
}
int GetGCD(int a, int b) {
	if (b == 0)
		return a;
	else
		return GetGCD(b, a % b);
}