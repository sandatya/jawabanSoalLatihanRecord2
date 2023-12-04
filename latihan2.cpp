/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    struct{
    	char nama[100];
      int jml;
    }stock;

    cout<<"masukkan nama barang : ";
    cin>>stock.nama;
    cout<<"masukkan jumlah barang : ";
    cin>>stock.jml;
    cout<<"";
    cout<<"====================\n";
    cout<<"";
    cout<<"output : "<<stock.nama<<" = ";
    cout<<stock.jml;
  
}
