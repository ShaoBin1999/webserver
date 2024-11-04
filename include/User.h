//
// Created by 89339 on 2024/11/4.
//

#ifndef WEBSERVER_USER_H
#define WEBSERVER_USER_H


#include <string>
using std::string;

class User {
public:
    string name;
    string password;

    User(const string& name, const string& password)
            : name(name), password(password) {}

};


#endif //WEBSERVER_USER_H
