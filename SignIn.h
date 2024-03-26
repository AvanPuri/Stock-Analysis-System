#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class SignIn {
protected:
    string username;
    string password;
public:
    SignIn();
    SignIn(string user, string pass);
    
    string GetUsername() { return username; }
    string GetPassword() { return password; }
    
    void SetUsername(string user) { username = user; }
    void SetPassword(string pass) { password = pass; }
    
    bool CheckPassword(string pass) { return password == pass; }
};
