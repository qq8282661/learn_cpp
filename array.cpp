//
// Created by sh on 2019/9/27.
//
#include <iostream>

using namespace std;

#include <iomanip>

using std::setw;

void getSeconds(unsigned long *par);

int *getArr();

int main() {
//    int n[10]; // n 是一个包含 10 个整数的数组
//
//    // 初始化数组元素
//    for (int i = 0; i < 10; i++) {
//        n[i] = i + 100; // 设置元素 i 为 i + 100
//    }
//    cout << "Element" << setw(13) << "Value" << endl;
//
//    // 输出数组中每个元素的值
//    for (int j = 0; j < 10; j++) {
//        cout << setw(7) << j << setw(13) << n[j] << endl;
//    }
//    return 0;
    int arr[] = {1, 2, 3, 4};
    int *p = arr;
    for (unsigned long i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        cout << arr[i + 1] << endl;

    }
    unsigned long sec;
    getSeconds(&sec);
    cout << sec << endl;
    // 返回i数组的函数
    int *ip = nullptr;
    ip = getArr();
    for (unsigned long i = 0; i < 3; i++) {
        cout << *(ip + i) << endl;
    }
    // 遍历数组
    int arr1[3] = {2, 3, 4};
    for (int &i:arr1) {
        cout << i << endl;
    }
}

void getSeconds(unsigned long *par) {
    *par = time(nullptr);
}

int *getArr() {
    static int r[3] = {1, 2, 3};
    return r;
}




