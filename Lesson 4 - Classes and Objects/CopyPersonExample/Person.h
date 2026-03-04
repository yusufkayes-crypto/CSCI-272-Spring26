using namespace std;
#include <iostream>

class Person{
    public: //can change in main()
        string name{"Shadman"};
        int age{20};
        char gender{'M'};
    public:
        void introduce(){
            cout << "Hello, I am " << name << ". Age: " << age << endl;
            if (gender == 'M'){
                cout << "I'm a male\n";
            }
            else if(gender == 'F'){
                cout << "Im a female\n";
            }
            else{
                cout << "Im unspecified\n";
            }
        }
    
    
};
