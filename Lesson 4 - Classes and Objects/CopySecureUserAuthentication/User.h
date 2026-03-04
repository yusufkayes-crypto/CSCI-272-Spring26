#include <iostream>
using namespace std;

class User{
    private: 
    string username , password;
    
    public:
    User(const string& uname, const string& pwd){ //parameterized constructor to update private data
        username = uname;
        password = pwd;
    }
    bool login(const string& inputUser, const string& inputPwd) const { //checks if user has correct data
        return ((inputUser == username) && (inputPwd == password));
    }
    void updatePassword(const string& newPwd) {
        password = newPwd;
    }
};
    
