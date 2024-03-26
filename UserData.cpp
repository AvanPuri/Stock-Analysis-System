#include "UserData.hpp"
UserData::UserData() {
    numusers = 0;
}

bool UserData::AddUser(SignIn user) {
    if (numusers < s) {
        Array[numusers++] = user;
    } else {
        std::cout << "User database is full. Cannot add more users." << std::endl;
    }
    return true;
}

bool UserData::Userexists(string username) {
    for (int i = 0; i < numusers; ++i) {
        if (Array[i].GetUsername() == username) {
            return true;
        }
    }
    return false;
}

bool UserData::authenticate(string username, string password) {
    for (int i = 0; i < numusers; ++i) {
        if (Array[i].GetUsername() == username && Array[i].CheckPassword(password)) {
            return true;
        }
    }
    return false;
}
