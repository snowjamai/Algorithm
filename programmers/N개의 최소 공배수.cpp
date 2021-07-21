#include <string>
#include <vector>

using namespace std;

int GetGCD(int a, int b);

int solution(vector<int> arr) {
	int answer = 0;
	answer = arr[0];

	for (int i = 0; i < arr.size() - 1; ++i) {
		int gcd = GetGCD(answer, arr[i + 1]);
		answer = answer * arr[i + 1] / gcd;

	}
	return answer;
}


int GetGCD(int a, int b) {
	if (a % b == 0)
		return b;
	else
		return GetGCD(b, a % b);
}