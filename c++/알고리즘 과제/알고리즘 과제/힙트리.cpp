#include <iostream>
using namespace std;
void Make_MaxHeap(int arr[], int size) {
	int cnt = 0;
	for (int i = 0; i < size; i++) {
		int child = i; int parent = child / 2; 
		while (arr[parent] < arr[child] && child>1) {
			auto a = arr[parent]; arr[parent] = arr[child]; 
			arr[child] = a; 
			child = parent;
			parent = child / 2; 
		} 
	} 
}

int Pop_MaxHeap(int arr[], int size) {
	int answer = arr[1]; int tmp = arr[size];
	int parent = 1; int child = 2;
	while (child < size) { 
		if (arr[child] < arr[child + 1]) 
			child++; 
		if (arr[1] > arr[child]) 
			break; 
		arr[parent] = arr[child];
		parent = child; child *= 2; 
	} 
	arr[parent] = arr[size]; arr[1] = 0; return answer;
}

int main() { 
	int arr[10] = { 0,3,8,13,16,11,5,2,1,33 };
	int size = sizeof(arr) / sizeof(int);
	Make_MaxHeap(arr, size);
	for (auto x : arr) {
		cout << x << " ";
	} 
	cout << endl; cout << Pop_MaxHeap(arr, size) << endl;
	for (auto x : arr) {
		cout << x << " "; 
	} return 0; 

}

