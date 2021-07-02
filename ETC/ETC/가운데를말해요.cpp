#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> v;

	int N;
	int num;

	scanf("%d", &N);

	for (int i = 0; i < N; ++i) {
		scanf("%d", &num);

		v.push_back(num);
		sort(v.begin(), v.end());
		int mid = i / 2;
		if (i % 2 == 0 && i != 0) {

			if (v[mid] > v[mid + 1])
				printf("%d ", v[mid + 1]);
			else
				printf("%d ", v[mid]);
		}
		else
			printf("%d ", v[mid]);
	}
}