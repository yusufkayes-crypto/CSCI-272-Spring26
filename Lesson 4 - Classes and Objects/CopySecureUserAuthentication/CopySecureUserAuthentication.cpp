/*
Shadman Yusuf Kayes
Course: CSCI 272 (2)
Lesson number: Lesson 4
Code Topic: Copy SecureUserAuthentication
Date: 3/3/2026
*/
#include "User.h"
#include <iostream>
using namespace std;

int main(){
    User user1("userName123", "password123"); //uses the parameterized Constructors
    bool success = user1.login("userName123", "password123");
    
    if(success){
        cout << "User logged in successfully!" << endl;
    }
    else{
        cout << "Login failed. Please check your credentials and try again." << endl;
    }
    
    return 0;
    
}

/*
Reflection:
1. What I understood:
 I understood how the basic fundamentals of a class and how it can be used as a login page
2. Difficulties:
 In the beginning, I struggled with understanding why a default constructor is not used
3. Research:
 I searched online more about constructors and parameters
4. AI Usage:
 Asked AI about default constructors
5. What I learned:
 I learned that default constructors are not needed if data inside the class is not initialized


*/
