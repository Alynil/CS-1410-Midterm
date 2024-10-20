#ifndef Expense_H
#define Expense_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

// class
class Expense
{
public:
  float amount;
  string category;
  string date;

  Expense()
  {
    void displayExpense();
  }

  // Constructor
  Expense(float expenseAmount, string expenseCategory, string expenseDate)
  {
    amount = expenseAmount;
    category = expenseCategory;
    date = expenseDate;
  }

  // expense detetails
  void displayExpense() const
  {
    cout << "Date: " << date << ", Amount: $" << setprecision(2) << fixed << amount << ", Category: " << category << endl;
  }
};

// caculate
float calculateTotal(const vector<Expense> &expenses)
{
  float total = 0;
  for (const auto &expense : expenses)
  {
    total += expense.amount;
  }
  return total;
}

// add to list
void addExpense(vector<Expense> &expenseList, Expense expense)
{
  expenseList.push_back(expense);
}

// display expenses
void displayExpensesByCategory(const vector<Expense> &expenses, string category)
{
  cout << "Expenses in category: " << category << endl;
  for (const auto &expense : expenses)
  {
    if (expense.category == category)
    {
      expense.displayExpense();
    }
  }
}

#endif