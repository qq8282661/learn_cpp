//
// Created by sh on 2019/9/27.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int i, j;

    // 设置种子
    srand(time(NULL));

    /* 生成 10 个随机数 */
    for (i = 0; i < 10; i++) {
        // 生成实际的随机数
        j = rand() % 10;
        cout << "随机数： " << j << endl;
    }

    // lambda
    int x = 1;
    int y = 2;
    auto compare = [x, y](int a, int b) -> bool { return x < y; };
    cout << boolalpha << compare(x, y) << endl;
    return 0;
}