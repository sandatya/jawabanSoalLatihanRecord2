/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    struct orang{
    	char nama[100];
      int umur;
    }saya;

    cout<<"nama saya : ";
    cin>>saya.nama;
    cout<<"umur saya : ";
    cin>>saya.umur;
    cout<<"nama saya adalah "<<saya.nama<<" ,berumur "<<saya.umur;

  
}
