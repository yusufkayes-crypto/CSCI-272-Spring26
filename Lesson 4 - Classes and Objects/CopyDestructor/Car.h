#include <iostream>
using namespace std;

class Car {
private:
    string brand{"Volkswagen"}; 
    string model = "Polo";     
    int year{2012};             

public:
    ~Car(){
    	cout << "Object is destroyed" << endl;
    }

    Car(){
    }

    Car(string b, string m, int y){
    	brand = b;
    	model = m;
    	year = y;
    }

    Car(const Car & other){
    	brand = other.brand;
    	model = other.model;
    	year = other.year + 1; 
    }

    void startEngine() {
    	cout << "start engine" << "{brand:" << brand << "|model:" << model << "}" << endl;
    }

    void accelerate() {
    	cout << "accelerate engine" << "{brand:" << brand << "|model:" << model << "}" << endl;
    }
};
