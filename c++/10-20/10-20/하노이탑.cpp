//하노이 타워

#include <iostream>

#include <string>

using namespace std;

void Hanoi(string src, string use, string dest, int n)

{

    if (n <= 0) //돌이 없을 때

    {

        return;

    }

    Hanoi(src, dest, use, n - 1); //n-1 개의 돌을 src에서 dest를 이용하여 use로 이동

    cout << "move " << src << " -> " << dest << endl; //scr에서 dest로 이동

    Hanoi(use, src, dest, n - 1); //n-1개의 돌을 use에서 src를 이용하여 dest로 이둉

}

int main()

{

    Hanoi("a", "b", "c", 4);

    return 0;

}

