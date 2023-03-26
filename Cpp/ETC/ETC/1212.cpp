#include <iostream>
#include <string>

using namespace std;
int tmp[3];

int main() {
	string s;

	cin >> s;
	int cnt = 0;

	for (int i = 0; i < s.size(); ++i) {
		if (i == 0) {
			int k = s[i] - '0';
			while (k) {
				tmp[cnt++] = k % 2;
				k /= 2;
			}
			if (tmp[2] == 0 && tmp[1] == 0)
				printf("%d", tmp[0]);
			else if (tmp[2] == 0)
				printf("%d%d", tmp[1], tmp[0]);
			else
				printf("%d%d%d", tmp[2], tmp[1], tmp[0]);
		}
		else {
			for (int i = 0; i < 3; ++i)
				tmp[i] = 0;
			int k = s[i] - '0';
			cnt = 0;
			while (k) {
				tmp[cnt++] = k % 2;
				k /= 2;
			}
			for (int i = 2; i >= 0; --i)
				printf("%d", tmp[i]);
		}
	}
}