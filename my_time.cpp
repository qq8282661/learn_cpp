//
// Created by sh on 2019/9/28.
//

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t now = time(nullptr);
    tm *s_tm = gmtime(&now);
    char *dt = ctime(&now);
    cout << "现在的时间是：" << dt << endl;
    cout << "今天是星期" << s_tm->tm_wday << endl;
    cout << "今天是" << 1900 + s_tm->tm_year << "年的第" << s_tm->tm_yday << "天" << endl;

}



