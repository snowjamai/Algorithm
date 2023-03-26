#include <iostream>

using namespace std;

int main() {
	int small = 0, big = 0, num = 0, space = 0;
	char c;

	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z')
			small++;
		else if (c >= 'A' && c <= 'Z')
			big++;
		else if (c >= '0' && c <= '9')
			num++;
		else if (c == ' ')
			space++;
		if (c == '\n') {
			printf("%d %d %d %d\n", small, big, num, space);
			small = big = num = space = 0;
		}
			
	}
	
}