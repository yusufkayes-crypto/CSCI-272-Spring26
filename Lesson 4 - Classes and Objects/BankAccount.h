using namespace std;

class BankAccount{
    private:
    double balance = 0.0;
    
    public:
    void deposit(double amount){
        balance += amount;
    }
    
    double getBalance() const {
        return balance;
    }
    
    void withdraw(double amount){
        if (amount <= balance){
            balance -= amount;
        }
    }
    
};
