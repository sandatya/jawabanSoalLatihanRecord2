/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    struct
	{
		char kode_buku[30];
		char nama_buku[50];
		char tahun_terbit[10];
		char pengarang[35];
		float harga;
      int jml;

	}buku[5];


int jml;
	cout<<"masukkan jumlah buku : ";
   cin>>jml;
   cout<<endl;
cout<<"\tDATA BUKU"<<endl;
cout<<"....................."<<endl<<endl;

for(int i=1;i<=jml;i++)
{
cout<<"masukan kode buku\t :";cin>>buku[i].kode_buku;
cout<<"masukan nama buku\t :";cin>>buku[i].nama_buku;
cout<<"masukan tahun terbit\t :";cin>>buku[i].tahun_terbit;
cout<<"masukan pengarang\t :";cin>>buku[i].pengarang;
cout<<"masukan harga\t\t :";cin>>buku[i].harga;
cout<<endl;
}
cout<<endl;
cout<<"\tDATA BUKU"<<endl;
for(int i=1;i<=jml;i++){
cout<<"data ke\t :"<<i<<endl;
cout<<"kode buku\t :"<<buku[i].kode_buku<<endl;
cout<<"nama buku\t :"<<buku[i].nama_buku<<endl;
cout<<"tahun tebit\t :"<<buku[i].tahun_terbit<<endl;
cout<<"pengarang\t :"<<buku[i].pengarang<<endl;
cout<<"harga\t\t :"<<buku[i].harga<<endl;
cout<<endl;
}
  
}
