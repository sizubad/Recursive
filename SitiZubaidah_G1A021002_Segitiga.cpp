//Siti Zubaidah G1A021002
//Segitiga

#include <iostream>
using namespace std;

void tampil(int jumlah)
{
    if (jumlah == 0)
        return;
    cout << "* ";
    tampil(jumlah - 1);
}
 
void segitiga(int n, int i){
    if (n == 0)
        return;
    tampil(i);
    cout << endl;
    segitiga(n - 1, i + 1);
}
int main()
{
    int n;
    cout<<"---------Membuat Segitiga dengan Rekursif---------"<<endl;
    printf("Masukkan jumlah segitiga : ");
    cin>>n;
    segitiga(n, 1);
    return 0;
}