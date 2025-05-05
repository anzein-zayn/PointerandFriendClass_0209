#include <iostream>
using namespace std;

class mahasiswa
{
public :
    int nim;
    void showNim()
    {
            cout <<  "No Induk = " << nim << endl;
    }
};

int main ()
{
    mahasiswa mhs; // Object mhs
    mhs.nim = 2024;
    mhs.showNim(); // Member Access Operator

    mahasiswa &refMhs = mhs; // Pointer references refMhs
    refMhs.nim = 2;// Member access Operator refMhs
    mhs.showNim();

    mahasiswa *pMhs = &mhs; // Pointer Dereferences pMhs
    pMhs ->nim = 3;// Arrow Operator
    pMhs ->showNim();
    return 0 ;
}