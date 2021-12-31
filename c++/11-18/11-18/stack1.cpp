#include<iostream>
// #include<stack>
#include<string>
#include<vector>
using namespace std;

class Stack {
public:
    int top, MaxSize;
    char* stack;
public:
    Stack(int size);
    bool isFull(), isEmpty();
    char pop();
    void push(char element);
    void print();
    char peek();
    int size();
};

Stack::Stack(int size) {
    MaxSize = size;
    stack = new char[MaxSize];
    top = -1;
}

bool Stack::isFull() {
    if (top == MaxSize - 1) return 1;
    else return 0;
}

bool Stack::isEmpty() {
    if (top == -1) return 1;
    else return 0;
}

char Stack::pop() {
    if (isEmpty() == 1) cout << "Empty \n";
    else return stack[top--];
}

void Stack::push(char element) {
    if (isFull() == 1) cout << "Full!\n";
    else stack[++top] = element;
}


void Stack::print() {
    for (int i = 0; i <= top; i++)
        cout << stack[i];
}
char Stack::peek() {
    if (isEmpty() == 0)
        return -1;
    else
        return stack[top];

}
int Stack::size() {
    int size = 0;
    for (int i = 0; i <= top; i++)
        size++;
    return size;
}
Stack stack(1000);
Stack op(100);
void express(char exp[]) {
    char ch;
    int value = 0;
    int len = strlen(exp);
    for (int i = 0; i < len; i++) {
        ch = exp[i];
        if (ch - '0' < 10 && ch - '0' > 0) {
            stack.push(ch);
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
Stack results(1000);
int result(char exp[]) {
    int len = strlen(exp);
    char ch;
    int op1, op2;
    for (int i = 0; i < len; i++) {
        ch = exp[i];
        if (ch - '0' < 10 && ch - '0' > 0) {
            results.push(ch);
        }
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            op2 = results.pop()-'0';
            op1 = results.pop()-'0';
            switch (ch) {
            case '+': results.push(op1 + op2); break;
            case '-': results.push(op1 - op2); break;
            case '*': results.push(op1 * op2); break;
            case '/': results.push(op1 / op2); break;
            }
        }
    }
    return results.pop();
}


int main() {
    char op[100], ch[100];
    cin >> op;
    cout << "중위표기법 : " << op << "\n";
    cout << "후위표기법 : ";
    express(op);
    stack.print();
    cout << "\n";
    cout << "연산결과 : ";
    for (int i = 0; i < stack.size(); i++) {
        ch[i] = stack.stack[i];
    }
    cout << result(ch);
    return 0;
}