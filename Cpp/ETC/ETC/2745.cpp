#include <iostream>
#include <string>

using namespace std;


int main() {
	string s;
	int B;
	long long int re = 0;

	cin >> s >> B;
	int pow = 0;

	for (int i = s.size() - 1; i >= 0; --i) {
		if (pow == 0)
			pow = 1;
		else
			pow = pow * B;
		if (s[i] >= '0' && s[i] <= '9')
			re += (s[i] - '0') * pow;
		else
			re += (s[i] - 'A' + 10) * pow;
	}
	printf("%lld", re);
}