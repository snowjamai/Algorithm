#include <iostream>  
#include <functional>
#include <queue>

using namespace std;

priority_queue<int> maxHeap;
priority_queue<int, vector<int>, greater<int>> minHeap;

int main() {
	int N;

	scanf("%d", &N);

	for (int i = 0; i < N; ++i) {
		int num;

		scanf("%d", &num);

		if (maxHeap.size() == 0)	maxHeap.push(num);
		else {
			if (maxHeap.size() > minHeap.size())
				minHeap.push(num);
			else
				maxHeap.push(num);


			if (maxHeap.top() > minHeap.top()) {
				int tmp_max = maxHeap.top();
				int tmp_min = minHeap.top();

				maxHeap.pop(); 
				minHeap.pop();

				maxHeap.push(tmp_min);
				minHeap.push(tmp_max);				
			}
		}
		printf("%d\n", maxHeap.top());

	}

}