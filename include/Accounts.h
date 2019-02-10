#ifndef ACCOUNTS_H
#define ACCOUNTS_H
#include <vector>
using namespace std;

class Accounts
{
    public:
        Accounts(float amount = 0);
        void showBalance();
        int transaction(float change);
        void showHistory();

    private:
        float balance;
        vector<float> history;

};

#endif // ACCOUNTS_H
