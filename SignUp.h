#ifndef SignUp_hpp
#define SignUp_hpp

#include <stdio.h>
#include <string>
using namespace std;

class SignUp {
protected:
    string username;
    string password;
    
public:
    SignUp();
    SignUp(string user, string pass);
    
    string Getusername() {return username;}
    string Getpassword() {return password;}
    
    void Setusername(string user) {username = user;}
    void Setpassword(string pass) {password = pass;}
    
    void SaveUser();
};
#endif /* SignUp_hpp */
