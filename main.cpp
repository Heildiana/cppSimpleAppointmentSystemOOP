#include <iostream>
#include <fstream>
#include "identity.h"
#include "student.h"
//#include "student.cpp"
#include "teacher.h"
#include "admin.h"

using namespace std;

int main() {
    int select = 0;
    student a;
    vector<identity *> allClass;
    allClass.push_back(new student());
    allClass.push_back(new teacher());
    allClass.push_back(new admin());
    //添加类，如果需要扩展，在此添加即可
    while (true) {//展示选择窗口
        cout << "===lab reservation system===" << endl;
        cout << "|-------------------|" << endl;

        for (auto cla: allClass) {
            cla->selectManu();
        }
        cout << "|-----0.exit--------|" << endl;
        cout << "|-------------------|" << endl;

        cin >> select;

        //登录
        if (select==0||select > allClass.size()) {
            cout << "illegal input!" << endl;
            cout << "exit";
            system("pause");
            system("cls");//清屏
            return 0;
        } else{
            (*allClass[select - 1]).login();
        }

    }

    return 0;
}
