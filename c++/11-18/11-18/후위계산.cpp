#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;
stack<string>stacks;
void express(char exp[]) {
    char ch;
    int value = 0;
    int len = strlen(exp);
    for (int i = 0; i < len; i++) {
        ch = exp[i];
        if (ch - '0' < 10 && ch - '0' > 0) {
            stacks.push(ch);
        }
        else {
            switch (ch) {
            case '(': break;
            case '+': op.push(ch); break;
            case '-': op.push(ch); break;
            case '*': op.push(ch); break;
            case '/': op.push(ch); break;
            case ')': stack.push(op.pop()); break;
            }
        }
    }
}
int main() {
    char op[100], ch[100];
    cin >> op;
    cout << "중위표기법 : " << op << "\n";
    cout << "후위표기법 : ";
    express(op);
    stack.print();
	return 0;
}