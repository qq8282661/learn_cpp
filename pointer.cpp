//
// Created by sh on 2019/9/27.
//

#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int &b = a;
    int *p = &a;
    cout << b << endl;
    cout << *p << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << p << endl;
    bool res = p == &b;
    cout << boolalpha << res << endl;

    cout << "字符串的指针：" << endl;

    char hello[] = "word";
    char *c = hello;
    cout << *c << endl;
}