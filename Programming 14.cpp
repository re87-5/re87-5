#include <iostream>
using namespace std;
int main() {
    string ename;
    double sal, tax, ins, rent, trans, Dis, Des, NetSal, NewSal;
    cin >> ename >> sal >> tax >> ins >> rent >> trans;
    Dis = tax + ins;
    Des = rent + trans;
    NetSal = sal - Dis + Des;
    NewSal = NetSal + (NetSal * 0.10);
    cout << ename <<  NewSal;

}
