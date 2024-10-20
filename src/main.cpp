#include <iostream>
#include "Expense.inc"
int main() {
    std::vector<Expense> expenses;
    std::string action;

    while (true) {
        std::cout << "Pick an action (add, total, category, quit):  ";
        std::cin >> action;

        if(action =="add") {
            float amount;
            std::string category, date;
            std::cout << "Enter amount: ";
            std::cin >> amount;
            std::cout << "Enter category: ";
            std::cin >> category;
            std::cout << "Enter date( MM-DD-YYYY): ";
            std::in >> date;

            Expense newExpense(amount, category, date);
            addExpense(expenses, newExpense);
        } else if (action ==  "total") {
            std::cout << "Total expenses: $" << calculateTotal(expenses) << std::endl;
        } else if (action == "category") {
            std::string category;
            std::cout << "Enter categoryto filter: ";
            std::cin >> category;
            displayExpensesByCategory(expenss, category);
        } else if (action == "quit") {
            break;
        } else if {
            std::cout << "Not Vaild, pick again." << std::endl;
        }
    }
    return 0;
}