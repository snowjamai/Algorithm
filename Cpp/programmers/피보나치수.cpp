#include <string>
#include <vector>

using namespace std;
int Fib[100000];
int GetFib(int);

int solution(int n) {
	int answer = 0;
	Fib[1] = 1;

	for (int i = 2; i <= n; ++i) {
		Fib[i] = (Fib[i - 1] + Fib[i - 2]) % 1234567;
	}
	return Fib[n];
}
