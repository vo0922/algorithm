#include <iostream>
#define MAX(a,b) ((a>b)?a:b)
#define MAX_DEGREE 50

using namespace std;

typedef struct {
	int degree;
	float coef[MAX_DEGREE];
} polynomial;

polynomial addPoly(polynomial A, polynomial B) {
	polynomial C;
	int A_index = 0, B_index = 0, C_index = 0;
	int A_degree = A.degree, B_degree = B.degree;
	C.degree = MAX(A.degree, B.degree);

	while (A_index <= A.degree && B_index <= B.degree) {
		if (A_degree > B_degree) {
			C.coef[C_index++] = A.coef[A_index++];
			A_degree--;
		}
		else if (A_degree == B_degree) {
			C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++];
			A_degree--;
			B_degree--;
		}
		else {
			C.coef[C_index++] = B.coef[B_index++];
			B_degree--;
		}
	}
	/*while (A_index > A.degree && B_index <= B.degree) {
		C.coef[C_index++] == B.coef[B_index++];
		B_degree--;
	}
	while (A_index <= A.degree && B_index > B.degree) {
		C.coef[C_index++] = A.coef[A_index++];
		A_degree--;
	}*/
	return C;
};
void printPoly(polynomial P) {
	int degree;
	degree = P.degree;

	for (int i = 0; i <= P.degree; i++) {
		cout << P.coef[i], degree--;
		if (i < P.degree)
			cout << " +";
	}
	cout << "\n";
};

int main() {
	polynomial A = { 3, { 4, 3, 5, 0} };
	polynomial B = { 4, {3, 1, 0, 2, 1} };

	polynomial C;
	C = addPoly(A, B);

	cout << "\n A(x) = "; printPoly(A);
	cout << "\n B(x) = "; printPoly(B);
	cout << "\n C(x) = "; printPoly(C);

	return 0; 
}