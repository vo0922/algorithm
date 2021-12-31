#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;

	stack<string> s;
	string str;
	int flag;
	for (int i = 1; i <= N; i++) {
		flag = 1;
		int len;
		cin >> str;
		len = str.length();
		stack<char> sc;
		for (int i = 0; i < len; i++) {
			char c = str[i];

			if (c == '(') {
				sc.push(str[i]);
			}
			else if(c == ')'){
				if (!sc.empty()) {
					sc.pop();
				}
				else {
					flag = 0;
				}
			}
		}
		if (!sc.empty()) flag = 0;
		if (flag) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}