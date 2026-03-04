#include <iostream>
using namespace std;

class Car{
    private:
    string brand{"Volkswagen"};
    string model{"Polo"};
    int year{2012};
    
    public:
    Car(){ //default constructor
        
    }
    
    Car(string b, string m, int y){ //parmeterized constructor
        brand = b;
        model = m;
        year = y;
        
    }
    Car(const Car& other){ //copy constructor
        brand = other.brand;
        model = other.model;
        year = other.year;
    }
    void startEngine() {
        cout << "Starting the engine of car {brand:" << brand << "|model:" << model << "}" << endl;
    }

    void accelerate() {
        cout << "Accelerating the car {brand:" << brand << "|model:" << model << "}" << endl;
    }
};
