#include <bits/stdc++.h>

using namespace std;

class Expense {
   private:
    string name;
    int amount;

   public:
    Expense(string itemName, int itemAmount) {
        name = itemName;
        amount = itemAmount;
    };
    void printExpense() {
        cout << " Name: " << name << " Amount: " << amount << " $" << endl;
    }
    int getAmount() {
        return amount;
    }
};

class ExpenseManager {
   private:
    vector<Expense> Expenses{};

   public:
    void addExpense(string name, int amount) {
        Expense a = Expense(name, amount);
        Expenses.push_back(a);
    }
    void addExpense(int amount) {
        Expense a = Expense("Null", amount);
        Expenses.push_back(a);
    }

    void addExpense(Expense expense) {
        Expenses.push_back(expense);
    }

    void printExpensese() {
        int count = 1;
        int total = 0;
        for (int i = 0; i < Expenses.size(); i++) {
            cout << count;
            Expenses[i].printExpense();
            total += Expenses[i].getAmount();
            count++;
        }
        cout << endl;
        cout << "Total Expense: " << total << " $";
    }
};

int main() {
    ExpenseManager Ojasv;  // Object

    //overloading with itemName and amount
    Ojasv.addExpense("Shopping", 100);
    Ojasv.addExpense("Iphone", 1000);
    Ojasv.printExpensese();

    // Overloading with class
    Expense IfixIt = Expense("IfixIt kit", 30);
    Expense Biolab = Expense("Biolab equipments", 199);
    Ojasv.addExpense(IfixIt);
    Ojasv.addExpense(Biolab);
    Ojasv.printExpensese();

    //overloading wiht amount only
    Ojasv.addExpense(100);
    Ojasv.addExpense(200);
    Ojasv.printExpensese();
}