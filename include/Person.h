#ifndef PERSON_H
#define PERSON_H
#include "Accounts.h"
#include <string>

class Person
{
    public:
        Person(string identity);
        void addAccount();
        void balances();
        void accHistory(int acc = 0);
        void accTransaction(int acc = 0, float amount=0);
        void getName();

    private:
        string name;
        vector<Accounts> account;
};

#endif // PERSON_H
