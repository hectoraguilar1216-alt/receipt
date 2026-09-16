#include <iostream>
#include <string> 
#include <iomanip>

using namespace std;

int main() {
    // --------------------------------------------------
    // SECTION 1: User Input Gathering
    // --------------------------------------------------
    string fullName;
    int quantity;
    double unitPrice;
    int score1, score2;

    cout << "Enter customer's full name: ";
    getline(cin, fullName);

    cout << "Enter item quantity: ";
    cin >> quantity;

    cout << "Enter item unit price: ";
    cin >> unitPrice;

    cout << "Enter score 1: ";
    cin >> score1;

    cout << "Enter score 2: ";
    cin >> score2;
 
    // SECTION 2: Calculations & Type Casting
    
    // Calculate subtotal
    double subtotal = quantity * unitPrice;

    // Calculate 7.5% tax
    double tax = subtotal * 0.075;

    // Calculate total amount
    double total = subtotal + tax;

    // Calculate exact average using static_cast<double> to avoid integer truncation
    double examAverage = static_cast<double>(score1 + score2) / 2;

    // --------------------------------------------------
    // SECTION 3: Formatted Terminal Receipt
    // --------------------------------------------------
    cout << "\n=========================================\n";
    cout << "         CUSTOMER SALES RECEIPT          \n";
    cout << "=========================================\n";

    cout << left << setw(20) << "Customer Name:" << fullName << "\n";
    cout << "-----------------------------------------\n";

    
    cout << fixed << setprecision(2);

    cout << left << setw(25) << "Item Quantity:" 
         << right << setw(15) << quantity << "\n";

    cout << left << setw(25) << "Unit Price:" 
         << right << setw(10) << "$" << setw(5) << unitPrice << "\n";

    cout << left << setw(25) << "Subtotal:" 
         << right << setw(10) << "$" << setw(5) << subtotal << "\n";

    cout << left << setw(25) << "Tax (7.5%):" 
         << right << setw(10) << "$" << setw(5) << tax << "\n";

    cout << "-----------------------------------------\n";
    cout << left << setw(25) << "Total Amount:" 
         << right << setw(10) << "$" << setw(5) << total << "\n";

    cout << "=========================================\n";
    cout << left << setw(25) << "Exam Average Score:" 
         << right << setw(15) << setprecision(2) << examAverage << "\n";
    cout << "=========================================\n";

    return 0;
}