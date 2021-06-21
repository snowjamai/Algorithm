#include <iostream>
#include <string>

using namespace std;

int nums[450];

int GetLen(int x);

int main() {
	int A, P;

	
	scanf("%d%d", &A, &P);
	nums[A] = 1;
	int num_src = A;
	int num_cpy = A;
	int sum;
	int total = 0;
	while (1) {
		total = 0;
		
		for (int i = 0; i < GetLen(num_src); ++i) {
			sum = 1;
			int re = num_cpy % 10;
			num_cpy /= 10;
			for (int j = 0; j < P; ++j) {
				sum *= re;
			}
			total += sum;
		}
		nums[total]++;

		if (nums[total] >= 3)
			break;
		num_src = num_cpy = total;


	}
	int cnt = 0;
	for (int i = 0; i < 450; ++i)
		if (nums[i] == 1)
			cnt++;

	printf("%d\n", cnt);
}

int GetLen(int x) {
	int cnt = 0;
	while (x) {
		cnt++;
		x /= 10;
	}
	return cnt;
}