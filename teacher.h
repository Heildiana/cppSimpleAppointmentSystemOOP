//
// Created by zzk on 2023/9/22.
//

#ifndef RESERVATIONS_TEACHER_H
#define RESERVATIONS_TEACHER_H
#include <string>
#include "identity.h"

class teacher:public identity{
private:
    string teacherId = "10000";
    static unordered_map<string ,pair<string,string>>tchrMap;
public:
    teacher(){};
    teacher(string username,string password,string teacherId);

    string getFilename() override;

    void operManu() override;

    void selectManu() override;

    void reviewAppointment();

    void showAllOrder();
};

#endif //RESERVATIONS_TEACHER_H
