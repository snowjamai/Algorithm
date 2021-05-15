#include <iostream>

using namespace std;

int main() {
	char str[101];

	fgets(str, 101, stdin);
	
	int n = 0;

	while (str[n] != '\0') {
		if (n % 10 == 0 && n != 0)
			printf("\n");
		printf("%c", str[n++]);
	}
	return 0;
}