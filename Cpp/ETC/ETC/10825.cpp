#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

struct Student {
	int math, kor, eng;
	string name;
};
bool cmp(const Student &u, const Student &v) {
	if (u.kor > v.kor)
		return true;
	else if (u.kor == v.kor) {
		if (u.eng < v.eng)
			return true;
		else if (u.eng == v.eng) {
			if (u.math > v.math)
				return true;
			else if (u.math == v.math)
				if (u.name < v.name)
					return true;
		}
	}
	return false;
}

int main() {
	int N;

	scanf("%d", &N);

	vector <Student> stu(N);

	

	for (int i = 0; i < N; ++i)
		cin >> stu[i].name >> stu[i].kor >> stu[i].eng >> stu[i].math;

	sort(stu.begin(), stu.end() , cmp);

	for (int i = 0; i < N; ++i)
		cout << stu[i].name << '\n';
}