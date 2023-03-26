#include <iostream>
#include <string>
using namespace std;

string s;
string tmp[1000];

int main() {
	cin >> s;
	
	for (int i = 0; i < s.size(); ++i)
		tmp[i] = s.substr(i, s.size());

	for (int i = 0; i < s.size() - 1; ++i) {
		int min_idx;
		min_idx = i;

		for (int j = i + 1; j < s.size(); ++j)
			if (tmp[min_idx] > tmp[j])
				min_idx = j;
		string change;
		change = tmp[min_idx];
		tmp[min_idx] = tmp[i];
		tmp[i] = change;		
	}
	for (int i = 0; i < s.size(); ++i)
		cout << tmp[i] << '\n';
}