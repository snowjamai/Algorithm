#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N, K;
	queue <int> man1;
	queue <int> man2;

	scanf("%d%d", &N, &K);
	
	for (int i = 1; i <= N; ++i)
		man1.push(i);
	int cnt = 0;
	printf("<");
	while (1) {
		if (man1.empty() && man2.empty())
			break;
		else if (man1.empty()) {
			for (int i = 0; i < man2.size(); ++i) {
				man1.push(man2.front());
				man2.pop();
			}
		}
		
		cnt++;
		if (cnt == K) {
			if (man1.size() + man2.size() == 1)
				printf("%d>", man1.front());
			else 
				printf("%d, ", man1.front());
			man1.pop();
			
			cnt = 0;
		}
		else {
			man2.push(man1.front());
			man1.pop();
		}
	}
}