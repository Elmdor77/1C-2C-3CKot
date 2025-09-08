// InheritanceConsoleApplication.cpp 

#include <iostream>
#include "SavingBankAccount.h" 
#include "Zadania.h"

int main()
{
    /*BankAccount b;
    b.AccountInformation();

    SavingBankAccount savingBankAccount(100, "Ewa Nowak", "zl", 0.12);
    savingBankAccount.AccountInformation();*/
    Trapeze a;
    std::cout << "Trapez:\n";
    a.figureProperties();
    a.figurePropertiesShow();
    Parallelogram b;
    std::cout << "\n\nRownoleglobok:\n";
    b.figureProperties();
    b.figurePropertiesShow();
    Diamond c;
    std::cout << "\n\nRomb:\n";
    c.figureProperties();
    c.figurePropertiesShow();
    Rectangle d;
    std::cout << "\n\nProstokat:\n";
    d.figureProperties();
    d.figurePropertiesShow();
    Square e;
    std::cout << "\n\nKwadrat:\n";
    e.figureProperties();
    e.figurePropertiesShow();



}