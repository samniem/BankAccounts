#include "Accounts.h"
#include <iostream>
#include <vector>

Accounts::Accounts(float amount)
:balance(amount), history(1)
{
    history[0] = amount;
}

void Accounts::showBalance()
{
    cout << balance << endl;
}

int Accounts::transaction(float change)
{
    if((balance + change) < 0)
    {
        return 0;
    }else {
        balance += change;
        history.resize(history.size()+1);
        //cout << "siz" << history.size() << endl;
        history[history.size()-1] = change;
        return 1;
    }
}

void Accounts::showHistory()
{
    int iters = history.size();
    for(int i = 0; i < iters; i++)
    {
        cout << i+1 << "\t" << history[i] << endl;
    }
}


