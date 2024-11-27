#include "BankAccount.h"

class SavingBankAccount :  BankAccount
{
protected:
	double interestRate;

public:

	SavingBankAccount();
	SavingBankAccount(double b, std::string o, std::string c, double ir);


	void CalculateInterestRate();

	void AccountInformation();
};