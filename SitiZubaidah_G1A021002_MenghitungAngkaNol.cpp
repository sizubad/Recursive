// Siti Zubaidah
//G1A021002
//Menghitung angka nol

#include<iostream>
using namespace std;
int nol(int angka)
{
static int hitung=0;
    if(angka>0)
    {

        if(angka%10==0)
        hitung++;

        nol(angka/10);
    }
    return hitung;
}
int main()
{
    int n;

    cout<<"Masukkan angka :";
    cin>>n;
    cout<<"Banyak angka nol pada angka adalah : "<<nol(n);
}