#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include "SignIn.hpp"
using namespace std;

class UserData : public SignIn
{
private:
    static const int s = 100;
    SignIn Array[s];
    int numusers;
public:
    UserData();
    UserData(const int s, SignIn Array[s], int users);
    
    int GetNumusers() { return numusers; }
    
    void SetNumusers(int users) { numusers = users; }
    
    bool AddUser(SignIn users);
    
    bool Userexists(string username);
    
    bool authenticate(string username, string password);
    
};
