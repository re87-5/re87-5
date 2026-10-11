#include <iostream>
using namespace std;

int main() {
    int d1, d2, d3, st_num;
    double Avg;
    string st_name;
    cout << "Enter st_name: ";
    cin >> st_name;
    cout << "Enter st_number: ";
    cin >> st_num;
    cout << "Enter d1: ";
    cin >> d1;

    cout << "Enter d2: ";
    cin >> d2;

    cout << "Enter d3: ";
    cin >> d3;
    Avg = (d1 + d2 + d3) / 3.0;
   
    cout << "Avg = " << Avg << endl;
    if (Avg >= 50) {
        cout << "Successful" << endl;
        cout << st_num << " " << st_name << " " << Avg << endl;
    } 
    else {
        cout << "Failing" << endl;
        cout << st_num << " " << st_name << " " << Avg << endl;
    }

    return 0;
}
