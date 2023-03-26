#include <iostream>
#include <string>

using namespace std;


int main() {
	char s[101];
	int c;
	int cnt = 0;
	while ((c = getchar()) != '\n')
		s[cnt++] = c;
		
	
	for (int i = 0; i < cnt; ++i) {
		if (s[i] >= 'a' && s[i] <= 'z')
			printf("%c", (s[i] - 'a' + 13) % 26 + 'a');
		else if (s[i] >= 'A' && s[i] <= 'Z')
			printf("%c", (s[i] - 'A' + 13) % 26 + 'A');
		else
			printf("%c", s[i]);
	}
		
}