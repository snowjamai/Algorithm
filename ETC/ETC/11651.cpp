#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct point{
	int x, y;
};

bool cmp(const point &u, const point &v) {
	if (u.y < v.y)
		return true;
	else if (u.y == v.y)
		if (u.x < v.x)
			return true;

	return false;
}
int main() {
	int N;
	scanf("%d", &N);

	vector<point> p(N);

	for (int i = 0; i < N; ++i)
		scanf("%d%d", &p[i].x, &p[i].y);

	sort(p.begin(), p.end(), cmp);

	for (int i = 0; i < N; ++i)
		printf("%d %d\n", p[i].x, p[i].y);
}