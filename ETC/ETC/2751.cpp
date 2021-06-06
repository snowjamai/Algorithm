#include <iostream>

using namespace std;

int num[1000001];

void SelectionSort(int *arr, int N);
void mergeSort(int *arr, int N, int l, int r);


int main() {
	int N;

	scanf("%d", &N);

	for (int n = 0; n < N; ++n) {
		scanf("%d", &num[n]);
	}
	SelectionSort(num, N);

	for (int i = 0; i < N; ++i) {
		printf("%d\n", num[i]);
	}
}
void SelectionSort(int *arr, int N) {
	for (int i = 0; i <  N - 1; ++i) {
		int m = arr[i];
		int idx = i;

		for(int j = i+1; j < N; ++j)
			if (arr[j] < m) {
				m = arr[j];
				idx = j;
			}
		int tmp = arr[i];
		arr[i] = m;
		arr[idx] = tmp;
	}
}

void merge(int *arr, int l, int r, int m, int N) {
	
}

void mergeSort(int *arr, int N, int l, int r) {
	int m;

	if (l < r) {
		m = (l + r) / 2;
		mergeSort(arr, N, l, m);
		mergeSort(arr, N, m + 1, r);
		merge(arr, l, r, m, N);

	}

}