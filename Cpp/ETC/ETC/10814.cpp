#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Person {
	int age;
	string name;
	int order;
};

bool cmp(const Person &u, const Person &v) {
	if (u.age < v.age)
		return true;
	else if (u.age == v.age) {
		if (u.order < v.order)
			return true;
	}
	return false;
}

int main() {
	int N;

	cin >> N;
	vector <Person> people(N);

	for (int i = 0; i < N; ++i) {
		cin >> people[i].age >> people[i].name;
		people[i].order = i;
	}
	sort(people.begin(), people.end(), cmp);

	for (int i = 0; i < N; ++i)
		cout << people[i].age << " "<< people[i].name << '\n';
}