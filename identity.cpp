//
// Created by zzk on 2023/9/22.
//
#include "identity.h"

string identity::getFilename() {return "default";}
void identity::login() {
    cout<<"please enter your id name and password"<<endl;
    string userId;
    string userna;
    string userpwd;
    cin>>userId>>userna>>userpwd;

    ifstream ifs;
    ifs.open(getFilename(),ios::in);
    if(!ifs.is_open()) cout<<"file not open"<<endl;

    cout<<"filename"<<endl;
    cout<<getFilename()<<endl;
    string fid,fna,fpwd;
    cout<<"file content"<<endl;
    while (ifs>>fid>>fna>>fpwd){
        cout<<fid<<fna<<fpwd<<endl;//检查
        if(userMap.count(fid)==0){
            userMap[fid] = {fna,fpwd};
        }
    }//??map?
    if(userMap[userId]== pair<string,string>(userna,userpwd)){
        cout<<"login success!"<<endl;
        //这里进入下一层函数接口
        //菜单界面
        system("pause");
    }
    else{
        cout<<"username"<<userMap[userId].first<<endl;
        cout<<"login failed"<<endl;
    }
//    cout<<"login success!"<<endl;
    system("pause");
}//login
