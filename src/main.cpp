#include <iostream>
#include "../inc/Expense.h"
using namespace std;

int main() {
    vector<Expense> expenses;
    string action;

    while (true) {
        cout << "Pick an action (add, total, category, quit):  ";
        cin >> action;

        if(action =="add") {
            float amount;
            string category, date;
            cout << "Enter amount: ";
            cin >> amount;
            cout << "Enter category: ";
            cin >> category;
            cout << "Enter date( MM-DD-YYYY): ";
            cin >> date;

            Expense newExpense(amount, category, date);
            addExpense(expenses, newExpense);
        } else if (action ==  "total") {
            cout << "Total expenses: $" << calculateTotal(expenses) << endl;
        } else if (action == "category") {
            string category;
            cout << "Enter category to filter: ";
            cin >> category;
            displayExpensesByCategory(expenses, category);
        } else if (action == "quit") {
            break;
        } else {
            cout << "Not Vaild, pick again." << endl;
        }
    }
    return 0;
}