#include <iostream>
#include "Person.h"

int main()
{
    vector<Person> customers;
    cout << "Manage bank customer data" << endl;
    cout << "To exit program, type 0 to the action prompt" << endl;
    int action = 1;
    int number;
    int accountnumber;
    float value;
    string name;
    while(action != 0)
    {
        cout << "Enter action, to list actions enter 9" << endl;
        cin >> action;
        switch(action)
        {
        case 0:
            cout << "Exiting program" << endl;
            break;
        case 1:
            cout << "Entering a new customer" << endl;
            cout << "Enter customer name" << endl;
            cin >> name;
            customers.resize(customers.size()+1, name);
            //customers[customers.size()-1].Person(name);
            break;
        case 2:
            for(size_t i = 0; i < customers.size(); i++)
            {
                cout << "Customer " << i << " ";
                customers[i].getName();
            }
            break;
        case 3:
            cout << "Enter customer number" << endl;
            cin >> number;
            customers[number].addAccount();
            break;
        case 4:
            cout << "Enter customer number" << endl;
            cin >> number;
            cout << "Account balances of customer ";
            customers[number].getName();
            customers[number].balances();
            break;
        case 5:
            cout << "Enter customer number" << endl;
            cin >> number;
            cout << "Enter account number" << endl;
            cin >> accountnumber;
            cout << "Enter transaction amount" << endl;
            cin >> value;
            customers[number].accTransaction(accountnumber, value);
            break;
        case 6:
            cout << "Enter customer number" << endl;
            cin >> number;
            cout << "Enter account number" << endl;
            cin >> accountnumber;
            customers[number].accHistory(accountnumber);

        case 9:
            cout << "Enter 1 to add a new customer" << endl;
            cout << "Enter 2 to view list of customers" << endl;
            cout << "Enter 3 to add a new account to a customer" << endl;
            cout << "Enter 4 to view customer account balances" << endl;
            cout << "Enter 5 to perform a transaction on an account" << endl;
            cout << "Enter 6 to view a customer's detailed account transaction history" << endl << endl;
            break;
        default:
            cout << "Bad input" << endl;
            break;
        }

    }

}
