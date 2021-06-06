#include <iostream>
#include <string>

using namespace std;

class Stack {
public:
	int arr[10000];
	int size = 0;
	void push(int x) {
		arr[size++] = x;
	}
	void pop() {
		if (size == 0)
			printf("-1\n");
		else
			printf("%d\n", arr[--size]);
	}
	void stacksize() {
		printf("%d\n", size);
	}
	void empty() {
		if (size == 0)
			printf("1\n");
		else
			printf("0\n");
	}
	void top() {
		if (size == 0)
			printf("-1\n");
		else
			printf("%d\n", arr[size - 1]);
	}
};
int main() {
	Stack s;
	string order;
	int x;

	int N;

	scanf("%d", &N);

	for (int n = 0; n < N; ++n) {
		cin >> order;

		if (order == "push") {
			cin >> x;
			s.push(x);
		}
		else if (order == "pop")
			s.pop();
		else if (order == "size")
			s.stacksize();
		else if (order == "empty")
			s.empty();
		else if (order == "top")
			s.top();
	}
}