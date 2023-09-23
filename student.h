//
// Created by zzk on 2023/9/22.
//

#ifndef RESERVATIONS_STUDENT_H
#define RESERVATIONS_STUDENT_H
#include <string>
#include "identity.h"
//#include "student.cpp"

using namespace std;

class student:public identity{
protected:
    string filename = "student_file.txt";



private:
    string studentId = "0000";
    static unordered_map<string ,pair<string,string>>stuMap;
//想要用静态的hashtable优化查找
public:
    student();

    student(string username,string password,string studentId);
    void operManu() override;

    void selectManu() override;

    string getFilename() override;//返回各子类自己的文件名

    void applyOrder();

    void showMyOrder();

    void showAllOrder();

    void cancelOrder();

};



#endif //RESERVATIONS_STUDENT_H
