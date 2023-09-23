//
// Created by zzk on 2023/9/22.
//
#include "student.h"

using namespace std;


student::student() {
}

//static容器需要在cpp中给个空容器赋值
unordered_map<string, pair<string, string>> student::stuMap = unordered_map<string, pair<string, string>>();

student::student(std::string username, std::string password, std::string studentId)
        : identity(username, password), studentId(studentId) {}


void student::operManu() {

}

string student::getFilename() {
    return STUDENT_FILE;
}

void student::selectManu() {
    cout << "|-----1.student-----|" << endl;
}

void student::applyOrder() {

}

void student::showMyOrder() {

}

void student::showAllOrder() {

}

void student::cancelOrder() {

}

