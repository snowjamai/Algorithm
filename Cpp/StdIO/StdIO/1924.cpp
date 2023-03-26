#include <iostream>

using namespace std;

int GetMonth(int target);


int main() {
	int M, D;
	int total_day = 0;

	scanf("%d%d", &M, &D);

	total_day = GetMonth(M);
	total_day += D - 1;

	total_day = total_day % 7;

	switch (total_day) {
	case 0:
		printf("MON\n");
		break;
	case 1:
		printf("TUE\n");
		break;
	case 2:
		printf("WED\n");
		break;
	case 3:
		printf("THU\n");
		break;
	case 4:
		printf("FRI\n");
		break;
	case 5:
		printf("SAT\n");
		break;
	case 6:
		printf("SUN\n");
		break;
	default:
		break;
	}
	return 0;
}

int GetMonth(int target) {
	int day = 0;

	for (int i = 1; i < target; ++i) {
		switch (i) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day += 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			day += 30;
			break;
		case 2:
			day += 28;
		default:
			break;
		}
	}
	return day;
}