#include <iostream>
#include <string>

using namespace std;

int alpha[26];

int main() {
	string S;

	cin >> S;

	for (int i = 0; i < 26; ++i)
		alpha[i] = -1;
	
	for (int i = 0; i < S.size(); ++i) {
		if (alpha[S[i] - 'a'] == -1)
			alpha[S[i] - 'a'] = i;
	}

	for (int i = 0; i < 26; ++i)
		printf("%d ", alpha[i]);
}