#include <iostream>
#include <string>

using namespace std;
int num[100];
int num_len;

string s;

int main() {
	cin >> s;

	int remain = s.size() % 3;
	switch (remain) {
	case 1:
		printf("%d", s[0] - '0');
		break;
	case 2:
		printf("%d", s[1] - '0' + (s[0] - '0') * 2);
		break;
	}
	
		for (int i = remain; i < s.size(); i = i + 3) {
			int re = (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0') * 1;
			printf("%d", re);
		}
	


}