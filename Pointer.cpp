#include<iostream>
using namespace std;

int main ()
{
    //derefrence
    int a = 10;
    int b = 6;
    int y = 20;
    int *c = &a;
    cout << " Alamat Memori : " << c << endl;
    cout << " Nilai dari C : " << *c << endl;
    c = &y;
    cout << " Alamat Memori : " << c << endl;
    cout << " Nilai dari C : " << *c << endl;
