#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	deque<int> q;
	string str;
	int N;

	cin >> N;
	for (int i = 1; i <= N; i++) {
		int a;
		cin >> str;
		if (str == "push") {
			cin >> a;
			q.push_back(a);
		}
		if (str == "pop") {
			if (!q.empty()) {
				cout << q.front() << "\n";
				q.pop_front();
			}
			else
				cout << "-1" << "\n";
		}
		if (str == "size") {
			cout << q.size() << "\n";
		}
		if (str == "empty") {
			cout << q.empty() << "\n";
		}
		if (str == "front") {
			if (!q.empty())
				cout << q.front() << "\n";
			else
				cout << "-1" << "\n";
		}
		if (str == "back") {
			if (!q.empty())
				cout << q.back() << "\n";
			else
				cout << "-1" << "\n";
		}
	}


	return 0;
}