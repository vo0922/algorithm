#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int main() {
    int bridge_length, weight;
    vector<int> truck_weights = { 7,4,5,6 };
    cin >> bridge_length;
    cin >> weight;
    int answer = 0;
    queue<int> que;
    int bridge_weight = 0;
    int count = 0;
    while (true) {
        if (count >= truck_weights.size()) {
            break;
        }else if (bridge_weight + truck_weights[count] <= weight) {
            que.push(truck_weights[count]);
            bridge_weight += truck_weights[count];
            count++;
        }
        else {
            que.push(0);
        }
        if (que.size() >= bridge_length) {
            bridge_weight -= que.front();
            que.pop();
        }
        answer++;
    }

    cout << answer + bridge_length;

    return 0;
}