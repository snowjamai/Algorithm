#include <iostream>

using namespace std;

long long int GetGCD(long long int a, long long int b);

int main() {
	long long int A, B;

	scanf("%lld%lld", &A, &B);
	
	long long int cnt = GetGCD(A, B);
	
	for (int i = 0; i < cnt; ++i)
		printf("1");

}

long long int GetGCD(long long int a, long long int b) {
	if (b == 0)
		return a;
	else
		GetGCD(b, a % b);
}