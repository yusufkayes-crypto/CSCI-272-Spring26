using namespace std;

class BankAccount{
    private:
    double balance = 0.0; //not accesible outside of class
    
    public:
    void deposit(double amount){
        balance += amount;
    }
    
    double getBalance() const { //getter method
        return balance;
    }
    
    void withdraw(double amount){
        if (amount <= balance){
            balance -= amount;
        }
    }
    
};
