#include<iostream>
using namespace std;

typedef struct {
	int row;
	int col;
	int value;
}term;

void smTranspose(term a[], term b[]) {
	int m, n, v, i, j, p;
	m = a[0].row;
	n = a[0].col;
	v = a[0].value;

	b[0].row = n;
	b[0].col = m;
	b[0].value = v;

	if (v > 0) {
		p = 1;
		for (i = 0; i < n; i++)
			for (j = 1; j <= v; j++)
				if (a[j].row == i) {
					b[p].row = a[j].col;
					b[p].col = a[j].row;
					b[p].value = a[j].value;
					p++;
				}
	}


}
int main() {
	int array[8][7] = { {0,0,2,0,0,0,12},{0,0,0,0,7,0,0},{23,0,0,0,0,0,0},{0,0,0,31,0,0,0},{0,14,0,0,0,25,0},{0,0,0,0,0,0,6},{52,0,0,0,0,0,0},{0,0,0,0,11,0,0} };
	int count = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 7; j++) {
			if (array[i][j] > 0) {
				count++;
			}
		}
	}

	term a[57], b[57];
	a[0].col = 8;
	a[0].row = 7;
	a[0].value = count;
	int index = 1;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 7; j++) {
			if (array[i][j] > 0) {
				a[index].col = i;
				a[index].row = j;
				a[index].value = array[i][j];
				index++;
			}
		}
	}
	smTranspose(a, b);
	for (int i = 0; i < index; i++) {
		cout << b[i].row << "\t" << b[i].col << "\t" << b[i].value << "\n";
	}

	/*for (int i = 0; i < index; i++) {
		cout << a[i].col << "\t" << a[i].row << "\t" << a[i].value << "\n";
	}*/



	return 0;
}