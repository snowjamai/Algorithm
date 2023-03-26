#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
	int N;
	char c;
	int result = 0;

	scanf("%d ", &N);
	vector<string> test(N);

	for (int n = 0; n < N; ++n) 
		cin >> test[n];		

	for (int i = 0; i < N; ++i) {
		int sum = 0;
		for (int s = 0; s < test[i].size(); ++s) {
			if (test[i][s] == '(')
				sum++;
			else if (test[i][s] == ')')
				sum--;
			if (sum < 0) {
				break;
			}
		}
		if (sum == 0)
			printf("YES\n");
		else
			printf("NO\n");
			
	}
	
		

		


}