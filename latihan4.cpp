/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
     struct{
   	float nakhir,uas,uts;
      char nama[50],grade;
   }nilai[100];

   int n;
   cout<<"masukkan jumlah data : ";
   cin>>n;

   for(int i=1;i<=n;i++){
   	cout<<"masukkan nama : ";
      cin>>nilai[i].nama;
      cout<<"masukkan nilai uts : ";
      cin>>nilai[i].uts;
      cout<<"masukkan nilai uas : ";
      cin>>nilai[i].uas;
      nilai[i].nakhir = ((nilai[i].uas * 0.4) + (nilai[i].uts*0.6));

       if(nilai[i].nakhir>=80){
       	nilai[i].grade='A';

  		 }else if(nilai[i].nakhir>=70){
   		nilai[i].grade='B';
   	}else if(nilai[i].nakhir>=56){
   		nilai[i].grade='C';
  		 }else if(nilai[i].nakhir>=47){
   		nilai[i].grade='D';
   	}else if(nilai[i].nakhir<47){
   		nilai[i].grade='E';
  		 }
      cout<<endl;

   }

   

   cout<<"==============================================="<<endl;
	cout<<"\t Daftar Nilai Mata Kuliah C++      "<<endl;
	cout<<"==============================================="<<endl;
	cout<<"No.  Nama           Nilai      Nilai    Nilai     Grade  "<<endl;
	cout<<"     Mahasiswa      UTS        UAS      Akhir           "<<endl;
	cout<<"==============================================="<<endl;

   for (int i=1; i<=n; i++)
	{
		cout<<setw(1)<<i;
		cout<<setw(11)<<nilai[i].nama;
		cout<<setw(10)<<nilai[i].uts;
		cout<<setw(10)<<nilai[i].uas;
		cout<<setw(10)<<nilai[i].nakhir;
		cout<<setw(10)<<nilai[i].grade<<endl;
	}
}
