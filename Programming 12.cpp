#include <iostream>
using namespace std;
int main() {
    string name;
    double sal, tax, ins, rent, trans;
    cout << "Enter employee name: ";
  cin>>name;
    cout << "Enter basic salary: ";
    cin >>sal;
    cout << "Enter tax amount: ";
    cin >> tax;
    cout << "Enter insurance amount: ";
    cin >> ins;
    cout << "Enter housing allowance: ";
    cin >> rent;
    cout << "Enter transport allowance: ";
    cin >> trans;
    double netSalary = (sal  +rent+ trans) - (tax + ins);
 cout<<endl;
    cout << "Employee Name: " << name << endl;
    cout << "Net Salary: " << netSalary << endl;
   
}
