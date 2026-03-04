/*
Shadman Yusuf Kayes
Course: CSCI 272 (2)
Lesson number: Lesson 4
Code Topic: Copy destructors
Date: 3/3/2026
*/
#include "Car.h"
#include <iostream>
using namespace std;

int main(){
    Car car1;

    Car car2("Tesla", "X", 2022);

    Car car3(car2);

    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    
    return 0;
}

/*
Reflection:
1. What I understood:
 I understood the use of destructors and how they are declared, how they relate to allocating and deallocating pointers, and how classes automatically do them
2. Difficulties:
 In the beginning, I struggled with understanding the need for destructors since C++ already does it for you
3. Research:
 I searched online about memory leaks and how destructors avoid them
4. AI Usage:
 I used ChatGPT to further understand memory leaks and how destructors are commonly used when using pointers & arrays
5. What I learned:
 I learned that destructors are commonly used when allocating memory, how destructors are declared, and memory leaks


*/
