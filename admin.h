//
// Created by zzk on 2023/9/22.
//

#ifndef RESERVATIONS_ADMIN_H
#define RESERVATIONS_ADMIN_H
#include <string>
#include "identity.h"
using namespace std;

class admin:public identity{
private:



public:
    void operManu() override;
public:
    admin();

    void selectManu() override;

    string getFilename() override;

    void addPerson();

    void showPerson();

    void showComputer();

    void clearFile();
};


#endif //RESERVATIONS_ADMIN_H
