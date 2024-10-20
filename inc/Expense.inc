//Expense.inc
#indef expense_H
#define expense_H

#include <iostream>
#include <vector>
#include <string>

//class
class Expense {
    public:
    float amount;
    std::string category;
    std::string date;

    Expense (float expenseamoutn, std::string expensecategory, std::string expensedate)   {

      void displayExpense() const;  
    }
};

//functions
void addExpense(std::vetcor<Expense>  &expenseList, Expnese, expense) 
float calculateTotal(const std::vetcor<Expense> &expenses)
void displayExpensebycategory(const)

#endif