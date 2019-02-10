#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string identity)
:name(identity), account(1)
{
}

void Person::balances()
{
    for (size_t i = 0; i < account.size(); i++)
    {
        cout << "Account " << i << " balance: ";
        account[i].showBalance();
    }
}

void Person::addAccount()
{
    account.resize(account.size()+1);
}

void Person::accHistory(int acc)
{
    cout << "Transaction history of account " << acc << endl;
    account[acc].showHistory();
}

void Person::accTransaction(int acc, float amount)
{
    int status = account[acc].transaction(amount);
    if (status == 0)
    {
        cout << "Transaction failed, not enough balance on account" << endl;
    }else{
        cout << "Transaction successful" << endl;
        cout << "Balance on account " << acc << ":" << endl;
        account[acc].showBalance();
    }
}

void Person::getName()
{
    cout << name << endl;
}
