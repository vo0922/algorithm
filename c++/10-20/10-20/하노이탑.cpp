//�ϳ��� Ÿ��

#include <iostream>

#include <string>

using namespace std;

void Hanoi(string src, string use, string dest, int n)

{

    if (n <= 0) //���� ���� ��

    {

        return;

    }

    Hanoi(src, dest, use, n - 1); //n-1 ���� ���� src���� dest�� �̿��Ͽ� use�� �̵�

    cout << "move " << src << " -> " << dest << endl; //scr���� dest�� �̵�

    Hanoi(use, src, dest, n - 1); //n-1���� ���� use���� src�� �̿��Ͽ� dest�� �̊E

}

int main()

{

    Hanoi("a", "b", "c", 4);

    return 0;

}

