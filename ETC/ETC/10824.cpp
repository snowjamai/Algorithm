#include <iostream>

using namespace std;

int GetLen(int x);

int main() {
	int A, B, C, D;
	long long int reA, reB, sum;
	int lenB, lenD;

	scanf("%d%d%d%d", &A, &B, &C, &D);
	
	lenB = GetLen(B);
	lenD = GetLen(D);

	reA = A;
	reB = C;
	for (int i = 0; i < lenB ; ++i)
		reA *= 10;
	for (int i = 0; i < lenD; ++i)
		reB *= 10;

	reA += B;
	reB += D;

	printf("%lld", reA + reB);

}
int GetLen(int x) {
	int cnt = 0;
	
	while (x /= 10)	cnt++;

	return cnt + 1;

}