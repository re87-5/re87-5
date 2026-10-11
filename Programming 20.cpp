#include <iostream>

using namespace std;

int main() {
    int st_no;
    string st_name;
    double d1, d2, d3, Avg;
cout<<"Enter d1";
 cin >> d1 ;
cout<<"Enter d2";
 cin >> d2;
cout<<"Enter d3";
 cin >> d3;
cout<<"Enter st_name";
 cin >> st_name;
cout<<"Enter st_no";
    cin >> st_no ;

    Avg = (d1 + d2 + d3) / 3.0;

    if (Avg < 50) {
        cout << st_name << " " << Avg << " BAD" << endl;
    } 
    else if (Avg >= 50 && Avg < 60) {
        cout << st_name << " " << Avg << " ACCEPTED" << endl;
    } 
    else if (Avg >= 60 && Avg < 80) {
        cout << st_name << " " << Avg << " GOOD" << endl;
    } 
    else if (Avg >= 80 && Avg < 90) {
        cout << st_name << " " << Avg << " VERY GOOD" << endl;
    } 
    else {
        cout << st_name << " " << Avg << " EXCELLENT" << endl;
    }

    return 0;
}
