#include <iostream>
#include <cstdio>

using namespace std;
char str[101];

int main() {
	while (fgets(str, 101, stdin))
		fputs(str, stdout);
}