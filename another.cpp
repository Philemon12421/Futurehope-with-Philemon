#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    double balance = 400;
    double amount;
    double serviceCharge = 0;
    const double MAX_WITHDRAWAL = 500;
    double totaldeduction ;
    char choice;



    cout<<"Enter withdrawal amount: $";
    cin >> amount;
    balance= 400;

    //check whether the withdrawal amount is validate or not
    if (amount > MAX_WITHDRAWAL)
    {
        cout <<"ATM allows a maximum withdrawal of $500 per day.\n";
        amount = MAX_WITHDRAWAL;
        cout << "Withdrawal amount set to $500.\n";
        return 0;
    }

    //calculating the service that i9s charged if it is over $300
    if (amount > 300)
    {
        serviceCharge = 0.04 * (amount - 300);
        cout <<"A service charge of $" <<serviceCharge << "will apply." <<endl;
    }

    //checking if balance covers the total charge
    double totalDeduction = amount + serviceCharge;
    if (balance < totalDeduction)
    {
        cout <<"Insufficient funds.Proceeding anyway with a $25 extra fee.\n";
        totalDeduction += 25;
    }
    balance -= totalDeduction;

    cout <<"You have withdrawn: $" << amount <<endl;
    cout <<"Service charges: $" << serviceCharge <<endl;
    if (balance < 0)
    {
        cout << "Your account is now overdrawn by $-" << -balance << endl;
    }
    else
    {
        cout <<"Remaining balance: $" << balance << endl;
    }




        return 0;
    }
// Created by philemonkusi292 on 6/10/25.
//
