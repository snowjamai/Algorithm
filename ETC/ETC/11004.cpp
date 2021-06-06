#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, K;

	scanf("%d%d", &N, &K);

	vector<int> a(N);

	for (int i = 0; i < N; ++i)
		scanf("%d", &a[i]);
	sort(a.begin(), a.end());

	printf("%d", a[K - 1]);
}