#include <iostream>
#include <deque>
#include <string>
#include <vector>
using namespace std;

int main() {
	
	int N;
	int K;
	cin >> N;
	cin >> K;
	vector<int> v;
	deque<int> d;
	for (int i = 1; i <= N; i++) {
		d.push_back(i);
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j < K; j++) {
			d.push_back(d.front());
			d.pop_front();
		}
		v.push_back(d.front());
		d.pop_front();
	}
	cout << "<";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
		if (i == v.size() - 1)
			break;
		else
			cout << ", ";
	}
	cout << ">";
	return 0;
}