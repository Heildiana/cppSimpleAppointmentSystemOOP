//
// Created by zzk on 2023/9/22.
//
#include "teacher.h"
#include <iostream>


teacher::teacher(std::string username, std::string password, std::string teacherId)
        : identity(username, password), teacherId(teacherId) {}


unordered_map<string ,pair<string,string>>tchrMap = unordered_map<string ,pair<string,string>>();

string teacher::getFilename() {
    return TEACHER_FILE;
}

void teacher::operManu() {

}

void teacher::selectManu() {
    cout << "|-----2.teacher-----|" << endl;
}

void teacher::showAllOrder() {

}

void teacher::reviewAppointment() {

}