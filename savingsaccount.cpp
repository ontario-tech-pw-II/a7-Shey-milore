#include "savingsaccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	// your code
	if(rate < 0)
	{
		interestRate = 0;
	}
	else 
	{
		interestRate = rate;
	}
}

double SavingsAccount::calculateInterest() {
	// your code
	double b = getBalance();
	double num = b * interestRate;
	b += num;
	setBalance(b);
	return getBalance();
} 
void SavingsAccount::display(ostream & os) const
{
	// your code
	os<<"Account type: Saving"<<endl;
	os<<"Balance: $" << getBalance()<<endl;
	os<<"Interest Rate (%):"<< interestRate<<endl;


}