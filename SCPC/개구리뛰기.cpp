/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>

using namespace std;

int Answer;
int rock[1000002];

int main(int argc, char** argv)
{
	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */

	 // freopen("input.txt", "r", stdin);

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;
		int N, K, r;
		cin >> N;
		for (int n = 1; n <= N; ++n) {
			cin >> r;
			rock[n] = r;
		}
		rock[N + 1] = 2000000000;
		cin >> K;
		int cur_pos, pre_pos;
		int max;

		cur_pos = 0;
		while (cur_pos < N) {
			max = rock[cur_pos] + K;
			pre_pos = cur_pos;

			while (rock[cur_pos] <= max)
				cur_pos++;

			cur_pos--;
			if (cur_pos == pre_pos) {
				Answer = -1;
				break;
			}
			Answer++;
		}
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}