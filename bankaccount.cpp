#include <iostream>
#include <conio.h>

using namespace std;

class bankaccount
{
private:
    long id;
    double balance;
public:
    bankaccount (long ID, double BL)
    {
        this->id = ID;
        this->balance = BL;
    }
    void deposit (double amount)
    {
        cout << "amount to be deposited: ";
        cin >> amount;
        balance += amount;
    }
    void withdraw (double amount)
    {
        cout << "amount to be withdrawn: ";
        cin >> amount;
        if (amount <= balance)
            balance -= amount;
        else
            cout << "PROBLEM !!! :(\n"
                 << "Cant not withdraw "
                 << amount << " since balance is "
                 << balance << endl;
    }

};

int main()
{
    int choice;
    bankaccount BA(206717,102.2);
    double amount;
    do{
    cout<<"\nenter your choice";
    cout<<"\n1.deposit";
    cout<<"\n2. withdraw";
    cin >> choice;
    switch (choice)
    {
        case 1:
            BA.deposit(amount);
            break;
        case 2:
            BA.withdraw(amount);
            break;
    }
    }while(choice!=2);
    return 0;
}
