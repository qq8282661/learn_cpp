//
// Created by sh on 2019/9/28.
//

#include <iostream>

using namespace std;

int main() {
    string name;
    int age;
    cout << "请输入您的名称：";
    cin >> name >> age;
    cout << "你好，" << name << age << endl;
    string err = "Unable to read";
    cerr << err << endl;
}