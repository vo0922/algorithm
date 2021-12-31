#include <iostream>
#include <string>
#include <stack>
#include <sstream>
using namespace std;

int main() {
	int N;
	cin >> N;
	cin.ignore();

	for (int i = 1; i <= N; i++) {
		string s;
		getline(cin, s);

		cout << "Case #" << i << ": ";
		string buf;
		stringstream w;
		w.str(s);
		stack<string> w_stack;

		while (!w.eof())
		{
			w >> buf;
			w_stack.push(buf);
		}
		while (!w_stack.empty())
		{
			cout << w_stack.top() << " ";
			w_stack.pop();
		}

		cout << "\n";

	}
}