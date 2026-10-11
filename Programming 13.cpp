#include <iostream>
using namespace std;
int main() {
    string name;
    double sal, tax, ins, rent, trans, dis, des, netSal;
    cin >> name >> sal >> tax >> ins >> rent >> trans;
    dis = tax + ins;
    des = rent + trans;
    netSal = sal - dis + des;
    cout << name <<  sal <<  dis <<  des  << netSal ;

  
}
