#include <iostream>
#include <string>

using namespace std;

int alph[26];


int main() {
	string s;

	cin >> s;

	for (int i = 0; i < s.size(); ++i)
		alph[s[i] - 'a']++;

	for (int i = 0; i < 26; ++i)
		printf("%d ", alph[i]);

}