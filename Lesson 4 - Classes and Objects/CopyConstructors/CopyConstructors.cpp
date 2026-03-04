/*
Shadman Yusuf Kayes
Course: CSCI 272 (2)
Lesson number: Lesson 4
Code Topic: Copy Constructors
Date: 3/3/2026
*/
#include "Car.h"
#include <iostream>
using namespace std;

int main(){
    Car car1;
    Car car2("Tesla", "X", 2022);
    
    Car car3(car2);
    
    Car* pCar1 = new Car;
    
    Car* pCar2 = new Car("Tesla", "X", 2022);

    
    Car carArray[20];
    
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    pCar1->startEngine();
    pCar2->startEngine();
    carArray[0].startEngine();
    
    delete pCar1;
    delete pCar2;
    
    
    return 0;
}
/*
Reflection:
1. What I understood:
 I understood how the different types of Constructors work and how they differ from regular member functions
2. Difficulties:
 In the beginning, I struggled with understanding the need for a default Constructor and including libraries for header files
3. Research:
 I searched online about why default constructors are used and why we need them when using other constructors.
4. AI Usage:
 I used ChatGPT to understand deallocating memory when allocating memory, as there would be a memory leak.
5. What I learned:
 I learned that new requires delete, when to use default constructors, how constructors differ from member functions, and adding libraries for specific header files.


*/
