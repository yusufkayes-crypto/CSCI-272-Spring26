/*
Shadman Yusuf Kayes
Course: CSCI 272 (2)
Lesson number: Lesson 4
Code Topic: Copy EncapsulateCarExample
Date: 3/3/2026
*/
#include "Car.h"
#include <iostream>
using namespace std;

int main(){
   
    Car car1;
    car1.startEngine();
    car1.accelerate();

    return 0;
}

/*
Reflection:
1. What I understood:
 I understood when to make the data private and public.
 I also understood how private data can only be used in the class
2. Difficulties:
 In the beginning, I struggled with a way of accessing private data in main()
3. Research:
 I searched online about when to use private data and when to use public
4. AI Usage:
 I used ChatGPT to understand more about when to use either private or public
5. What I learned:
 I learned about access specifiers, and that public is usually used for member functions and changing data.


*/
