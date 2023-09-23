//
// Created by zzk on 2023/9/22.
//

#ifndef RESERVATIONS_IDENTITY_H
#define RESERVATIONS_IDENTITY_H

#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <fstream>
#include "globalFile.h"


using namespace std;

class identity {
protected:
    string username = "default";
    string password = "123456";
//    string filename = "default";
    unordered_map<string,pair<string,string>>userMap = {};
public:
    virtual string getFilename();
    virtual void selectManu() = 0;

    virtual void operManu() = 0;

    virtual void login();


    identity() {}

    identity(string username, string password) : username(username), password(password) {}//这个似乎是不需要的

};

#endif //RESERVATIONS_IDENTITY_H
