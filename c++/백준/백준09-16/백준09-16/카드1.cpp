#include <iostream>
#include <deque>
using namespace std;

int main() {
	int N;
	deque<int> q;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		q.push_back(i);
	}

	for (int i = 1; i < N; i++) {
		cout << q.front() << " ";
		q.pop_front();
		q.push_back(q.front());
		q.pop_front();
	}
	cout << q.front();

	return 0;
}