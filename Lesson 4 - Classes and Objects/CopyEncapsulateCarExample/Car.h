#include <iostream>
using namespace std;

class Car{
private: //keeps data hidden and unable to change
   
    string brand{"Volkswagen"};
    string model{"Polo"};
    int year{2012};

public: //allows to call in main()
    void startEngine() {
    	cout << "start engine" << endl;
    }

    void accelerate() {
    	cout << "accelerate engine" << endl;
    }
};
